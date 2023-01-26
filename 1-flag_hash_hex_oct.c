#include "main.h"
/**
 * hash_oct - prints decimal integer in base 8 with flag
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer
 * @length: amount of characters in current buffer
 * Return: number of chars printed
 */
int hash_oct(va_list list, char *buffer, unsigned int length)
{
	int num_input;
	int count, i, num1, num_neg;
	char *binary, *octal;

	num_input = va_arg(list, int);
	num_neg = 0;
	if (num_input == 0)
	{
		length = buffer_input(buffer, '0', length);
		return (1);
	}
	if (num_input < 0)
	{
		num_input = (num_input * -1) - 1;
		num_neg = 1;
	}
	length = buffer_input(buffer, '0', length);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = buffer_binary(binary, num_input, num_neg, 32);
	octal = malloc(sizeof(char) * (11 + 1));
	octal = buffer_oct(binary, octal);
	for (count = i = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && num1 == 0)
		{
			num1 = 1;
		}
		if (num1 != 0)
		{
			length = buffer_input(buffer, octal[i], length);
			count++;
		}
	}
	free(binary);
	free(octal);
	return (count + 1);
}

/**
 * hash_hex - prints a decimal integer in hexadecimal with flag
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer
 * @length: amount of characters in current buffer
 * Return: number of chars printed
 */
int hash_hex(va_list list, char *buffer, unsigned int length)
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
	length = buffer_input(buffer, '0', length);
	length = buffer_input(buffer, 'x', length);
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
	return (count + 2);
}
/**
 * hash_hex_upp - prints integer in uppercase hexadecimal with flag
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer.
 * @length: amount of characters in current buffer
 * Return: number of chars printed.
 */
int hash_hex_upp(va_list list, char *buffer, unsigned int length)
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
	length = buffer_input(buffer, '0', length);
	length = buffer_input(buffer, 'X', length);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = buffer_binary(binary, int_input, isnegative, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = buffer_hex(binary, hexadecimal, 1, 8);
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
