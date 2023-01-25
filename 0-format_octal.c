#include "main.h"
/**
 * print_oct - prints decimal integer in base 8
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer
 * @length: amount of characters in current buffer
 * Return: number of chars printed
 */
int print_oct(va_list list, char *buffer, unsigned int length)
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
	return (count);
}
