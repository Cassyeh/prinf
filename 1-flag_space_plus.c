#include "main.h"
/**
 * plus_int - print integer with plus symbol
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer
 * @length: amount of characters in current buffer
 * Return: number of chars printed
 */
int plus_int(va_list list, char *buffer, unsigned int length)
{
	int num_input;
	unsigned int num_absolute, num_temp, i, divisor;

	num_input = va_arg(list, int);
	if (num_input < 0)
	{
		num_absolute = num_input * -1;
		length = buffer_input(buffer, '-', length);
	}
	else
	{
		num_absolute = num_input;
		length = buffer_input(buffer, '+', length);
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
	return (i + 1);
}
/**
 * space_int - prints int begining with space
 * @list: list of arguments in this case, integers
 * @buffer: pointer to buffer
 * @length: amount of characters in current buffer
 * Return: number of chars printed
 */
int space_int(va_list list, char *buffer, unsigned int length)
{
	int num_input;
	unsigned int num_absolute, num_temp, i, divisor;

	num_input = va_arg(list, int);
	if (num_input < 0)
	{
		num_absolute = num_input * -1;
		length = buffer_input(buffer, '-', length);
	}
	else
	{
		num_absolute = num_input;
		length = buffer_input(buffer, ' ', length);
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
	return (i + 1);
}
