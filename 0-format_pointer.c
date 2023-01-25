#include "main.h"
#include <stdio.h>
/**
 * print_ptr - prints the address of an input variable.
 * @list: input address.
 * @buffer: buffer pointer.
 * @length: amount of characters in current buffer
 *
 * Return: number of chars printed.
 */
int print_ptr(va_list list, char *buffer, unsigned int length)
{
	void *address;
	long int int_input;
	int i, count, first_digit, isnegative;
	char *hexadecimal, *binary;
	char nill[] = "(nil)";

	address = (va_arg(list, void *));
	if (address == NULL)
	{
		for (i = 0; nill[i]; i++)
			length = buffer_input(buffer, nill[i], length);
		return (5);
	}
	int_input = (intptr_t)address;
	isnegative = 0;
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (64 + 1));
	binary = buffer_binary(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = buffer_hex(binary, hexadecimal, 0, 16);
	length = buffer_input(buffer, '0', length);
	length = buffer_input(buffer, 'x', length);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			length = buffer_input(buffer, hexadecimal[i], length);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
