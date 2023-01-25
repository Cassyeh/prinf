#include "main.h"
/**
 * print_hex_upp - prints a decimal integer in uppercase hexadecimal
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer.
 * @length: amount of characters in current buffer
 * Return: number of chars printed.
 */
int print_hex_upp(va_list list, char *buffer, unsigned int length)
{
	int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(list, int);
