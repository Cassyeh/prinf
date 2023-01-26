#include "main.h"
/**
 * _printf - Printf function
 * @format: format type identifiers
 * Return: string with identifiers
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i = 0, length = 0, printed_chars = 0;
	int (*func)(va_list, char *, unsigned int);
	char *buffer;

	va_start(list, format);
	buffer = malloc(sizeof(char) * 1024);
	if (format == NULL || buffer == NULL ||
	(format[i] == '%' && format[i + 1] == '\0'))
	{
		return (-1);
	}
	if (format[i] == '\0')
	{
		return (0);
	}
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				length = buffer_input(buffer, format[i], length);
				i++;
			}
			if (format[i + 1] == '\0')
			{
				print_buffer(buffer, length);
				free(buffer);
				va_end(list);
				return (-1);
			}
			else
			{
				func = get_func(format, i + 1);
				if (func == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
					{
						return (-1);
					}
					buffer_input(buffer, format[i], length);
					printed_chars++;
					i--;
				}
				else
				{
					printed_chars += func(list, buffer, length);
					i += get_func1(format, i + 1);
				}
			}
			i++;
		}
		else
		{
			buffer_input(buffer, format[i], length);
			printed_chars++;
		}
		for (length = printed_chars; length > 1024; length -= 1024)
			;
}
	print_buffer(buffer, length);
	free(buffer);
	va_end(list);
	return (printed_chars);
}
