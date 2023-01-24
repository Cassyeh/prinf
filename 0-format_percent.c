#include "main.h"
/**
 * print_perc - print a percent sign
 * @list: list of arguments
 * Return: number of chars printed
 */
int print_perc(va_list list)
{
	char *a = va_arg(list, char *);
	int count = 0;

	count = count + _putchar(a[0]);
	return (count);
}
