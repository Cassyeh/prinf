#include "main.h"
/**
 * long_int - prints a long integer
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer
 * @length: amount of characters in current buffer
 * Return: number of chars printed
 */
int long_int(va_list list, char *buffer, unsigned int length)
{
	long int num_input;
	unsigned long int num_absolute, num_temp, i, divisor, count;

	num_input = va_arg(list, long int);
	count = 0;
	if (num_input < 0)
	{
		num_absolute = num_input * -1;
		length = buffer_input(buffer, '-', length);
		count = 1;
	}
	else
	{
		num_absolute = num_input;
	}
	num_temp = num_absolute;
	divisor = 1;
	while (num_temp > 9)
	{
		divisor = divisor * 10;
		num_temp = num_temp / 10;
	}
	for (i = 0; divisor > 0; i++)
	{
		length = buffer_input(buffer, ((num_absolute / divisor) % 10) + '0', length);
		divisor = divisor / 10;
	}
	return (i + count);
}
/**
 * long_unsgnd - prints an unsigned long integer
 * @list: list of arguments in this case, unsigned integers
 * @buffer: pointer to buffer
 * @length: amount of characters in current buffer
 * Return: number of chars printed
 */
int print_unsgnd(va_list list, char *buffer, unsigned int length)
{
	unsigned long int num_input;
	unsigned long int num_temp, i, divisor;
	
	num_input = va_arg(list, unsigned long int);
	num_temp = num_input;
	divisor = 1;
	while (num_temp > 9)
	{
		divisor = divisor * 10;
		num_temp = num_temp / 10;
	}
	for (i = 0; divisor > 0; i++)
	{
		length = buffer_input(buffer, ((num_input / divisor) % 10) + '0', length);
		divisor = divisor / 10;
	}
	return (i);
}
/**
 * long_oct - prints a long decimal integer in base 8
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer
 * @length: amount of characters in current buffer
 * Return: number of chars printed
 */
int long_oct(va_list list, char *buffer, unsigned int length)
{
	long int num_input;
	long int count, i, num1, num_neg;
	char *binary, *octal;

	num_input = va_arg(list, long int);
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
	binary = malloc(sizeof(char) * (64 + 1));
	binary = buffer_binary(binary, num_input, num_neg, 64);
	octal = malloc(sizeof(char) * (22 + 1));
	octal = buffer_long_oct(binary, octal);
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
/**
 * long_hex - prints a long decimal integer in hexadecimal
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer
 * @length: amount of characters in current buffer
 * Return: number of chars printed
 */
int long_hex(va_list list, char *buffer, unsigned int length)
{
	long int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(list, long int);
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
	binary = malloc(sizeof(char) * (64 + 1));
	binary = buffer_binary(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = buffer_hex(binary, hexadecimal, 0, 16);
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
/**
 * long_hexupp - prints a long decimal integer in uppercase hexadecimal
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer.
 * @length: amount of characters in current buffer
 * Return: number of chars printed.
 */
int long_hexupp(va_list list, char *buffer, unsigned int length)
{
	long int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(list, long int);
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
	binary = malloc(sizeof(char) * (64 + 1));
	binary = buffer_binary(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = buffer_hex(binary, hexadecimal, 1, 16);
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
