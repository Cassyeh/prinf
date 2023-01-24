#include "main.h"
/**
 * _printf - Printf function
 * @format: format type identifiers
 * Return: string with identifiers
 */
int _printf(const char *format, ...)
{
	int length = 0;
	int total_length = 0;
	int i, printed = 0;
	int j = 0;
	va_list list;
	char buffer[1024];
	char *str;
	char* (*f)(va_list);

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list, format);

	if (format[0] == '%' && format[1] == '\0')
	{
		va_end(list);
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[length++] = format[i++];
			if (length == 1024)
			{
				print_buffer(buffer, length, list);
			}
			total_length++;
		}
		else
		{
			i++;
			print_buffer(buffer, length, list);
			f = get_func(format[i]);
			printed = get_func(format[i]);
			if (printed == -1)
			{
				va_end(list);
				return (-1);
			}
			else
			{
				str = f(list);
				if (str == NULL)
				{
					va_end(list);
					return (-1);
				}
				if (format[i] == 'c' && str[0] == '\0')
				{
					buffer[length++] = '\0';
					total_length++;
				}
				j = 0;
				while (str[j] != '\0')
				{
					buffer[length++] = str[j];
					total_length++;
					j++;
				}
				free(str);
			}
		}
	}
	print_buffer(buffer, length, list);
	return (total_length);
}
