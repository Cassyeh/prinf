#include "main.h"
/**
 * print_char - prints a char
 * @list: character to be printed
 * Return: Number of chars printed
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	return (_putchar(c));
}
