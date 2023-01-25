#include "main.h"
/**
 * print_unsgnd - prints an unsigned integer
 * @list: list of arguments in this case, unsigned integers
 * @buffer: pointer to buffer
 * @length: amount of characters in current buffer.
 * Return: number of chars printed.
 */
int print_unsgnd(va_list list, char *buffer, unsigned int length)
{
	unsigned int num_input;
	unsigned int num_temp, i, divisor;
	
	num_input = va_arg(list, unsigned int);
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
