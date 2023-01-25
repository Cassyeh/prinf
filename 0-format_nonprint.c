#include "holberton.h"
/**
 * print_nonprint - prints a string and values of
 * non-printed chars
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_nonprint(va_list list, char *buffer, unsigned int length)
{
	unsigned char *str;
	char *hexadecimal, *binary;
	unsigned int i, sum, op;

	str = va_arg(list, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			length = buffer_input(buffer, '\\', length);
			length = buffer_input(buffer, 'x', length);
			op = str[i];
			binary = buffer_binary(binary, op, 0, 32);
			hexadecimal = buffer_hex(binary, hexadecimal, 1, 8);
			length = buffer_input(buffer, hexadecimal[6], length);
			length = buffer_input(buffer, hexadecimal[7], length);
			sum += 3;
		}
		else
			length = buffer_input(buffer, str[i], length);
	}
	free(binary);
	free(hexadecimal);
	return (i + sum);
}
