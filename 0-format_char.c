#include "main.h"
/**
 * print_char - prints a char.
 * @list: character to be printed
 * @buffer: pointer to buffer
 * @length: amount of characters in current buffer
 * Return: Number of chars printed
 */
int print_char(va_list list, char *buffer, unsigned int length)
{
	char c;

	c = va_arg(list, int);
	buffer_input(buffer, c, length);
	return (1);
}
