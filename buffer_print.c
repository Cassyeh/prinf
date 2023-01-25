#include "main.h"
#include <unistd.h>

/**
 * print_buffer - prints buffer
 * @buffer: pointer to buffer string
 * @length: number of characters to be printed
 * Return: number of characters printed
 */
int print_buffer(char *buffer, unsigned int length)
{
	return (write(1, buffer, length));
}

/**
 * buffer_input - inputs and concatenates the buffer characters
 * @buffer: pointer to buffer
 * @c: character to enter into buffer
 * @length: length of current buffer
 * Return: new length of buffer
 */
unsigned int buffer_input(char *buffer, char c, unsigned int length)
{
	if (length == 1024)
	{
		print_buffer(buffer, length);
		length = 0;
	}
	buffer[length] = c;
	length++;
	return (length);
}

/**
 * buffer_binary - prints binary characters in buffer
 * @binary: pointer to buffer converted to binary
 * @num_input: input integer to be converted
 * @num_neg: for negative input integer
 * @max: maximum size of characters in a binary buffer
 * Return: pointer to chars printed.
 */
char *buffer_binary(char *binary, long int num_input, int num_neg, int max)
{
	int i;

	for (i = 0; i < max; i++)
		binary[i] = '0';
	binary[max] = '\0';
	for (i = max -1; num_input > 1; i--)
	{
		if (num_input == 2)
			binary[i] = '0';
		else
			binary[i] = (num_input % 2) + '0';
		num_input = num_input / 2;
	}
	if (num_input != 0)
		binary[i] = '1';
	if (num_neg != 0)
	{
		for (i = 0; binary[i]; i++)
			if (binary[i] == '0')
				binary[i] = '1';
			else
				binary[i] = '0';
	}
	return (binary);
}
