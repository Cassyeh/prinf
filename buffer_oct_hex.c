#include "main.h"
/**
 * buffer_oct - prints octal characters in buffer
 * @binary: pointer to buffer converted to binary
 * @octal: pointer to buffer converted to octal
 * Return: pointer to chars printed.
 */
char *buffer_oct(char *binary, char *octal)
{
	int op, i, j, num_oct, max;

	octal[11] = '\0';
	for (i = 31, num_oct = 10; i >= 0; i--, num_oct--)
	{
		if (i > 1)
		{
			max = 4;
		}
		else
		{
			max = 2;
		}
		for (op = 0, j = 1; j <= max; j *= 2, i--)
		{
			op = ((binary[i] - '0') * j) + op;
		}
		i++;
		octal[num_oct] = op + '0';
	}
	return (octal);
}

/**
 * buffer_hex - prints hexadecimal characters in buffer
 * @binary: pointer to buffer converted to binary
 * @hex: hexadecimal characters to be printed
 * @isupper: integer used to check for uppercase hexa
 * @max: maximum size of characters of the hex buffer
 * Return: pointer to hexadecimal characters printed
 */
char *buffer_hex(char *binary, char *hex, int isupper, int max)
{
	int op, i, j, num_hex;

	hex[max] = '\0';
	if (isupper != 0)
	{
		num_hex = 55;
	}
	else
	{
		num_hex = 87;
	}
	for (i = (max * 4) - 1; i >= 0; i--)
	{
		for (op = 0, j = 1; j <= 8; j *= 2, i--)
		{
			op = ((binary[i] - '0') * j) + op;
		}
		i++;
		if (op < 10)
		{
			hex[i / 4] = op + 48;
		}
		else
		{
			hex[i / 4] = op + num_hex;
		}
	}
	return (hex);
}
