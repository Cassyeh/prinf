#include "main.h"
/**
 * print_hex_upp - prints a decimal integer in uppercase hexadecimal
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer.
 * @length: amount of characters in current buffer
 * Return: number of chars printed.
 */
int print_hex(va_list list, char *buffer, unsigned int length)
{
	int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(list, int);
	isnegative = 0;
	if (int_input == 0)
	{
		length = buffer_input(buffer, '0', length);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = buffer_binary(binary, int_input, isnegative, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = buffer_hex(binary, hexadecimal, 0, 8);
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
	return (count);
}
