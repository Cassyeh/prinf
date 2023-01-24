#include "main.h"
/**
 * print_str - prints a string
 * @list: list of arguments in this case, chars
 * Return: number of chars printed
 */
int print_str(va_list list)
{
	int i;
	int count = 0;
	int length = 0;
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		count = count + _putchar(str[i]);
	}
	return (count);
}
