#include "main.h"
/**
 * print_str - prints a string.
 * @list: list of arguments in this case, chars.
 * @buffer: pointer to buffer.
 * @length: amount of characters in current buffer.
 * Return: number of chars printed.
 */
int print_str(va_list list, char *buffer, unsigned int length)
{
	unsigned int i;
	char null_str[] = "(null)";
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		for (i = 0; null_str[i]; i++)
		{
			length = buffer_input(buffer, null_str[i], length);
		}
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		length = buffer_input(buffer, str[i], length);
	}
	return (i);
}
