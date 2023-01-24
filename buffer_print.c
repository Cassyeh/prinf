#include "main.h"
#include <unistd.h>

/**
 * print_buffer - prints buffer.
 * @buffer: pointer to buffer string.
 * @length: number of characters to be printed.
 * Return: number of characters printed.
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
