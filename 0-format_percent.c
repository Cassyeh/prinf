#include "main.h"
#include <stdio.h>

/**
 * print_perc - prints the percent(%) character.
 * @c: character to print
 * @buffer: pointer to current buffer.
 * @length: amount of characters in current buffer.
 * Return: On success 1.
 */
int print_perc(va_list c __attribute__((unused)), char *buffer,
		unsigned int length)
{
	buffer_input(buffer, '%', length);
	return (1);
}
