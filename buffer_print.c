#include "main.h"
/**
 * print_buffer - Prints the contents of the buffer
 * @buffer: buffer containing string
 * @length: length of string in buffer
 * @list: va_list
 */
void print_buffer(char *buffer, int length, va_list list)
{
	int i;
	int count = 0;

	for (i = 0; i < length; i++)
	{
		count = count + _putchar(buffer[i]);
	}
	va_end(list);
}
