#include "main.h"
/**
 * buffer_long_oct - prints octal characters in buffer
 * @binary: pointer to buffer converted to binary
 * @octal: pointer to buffer converted to octal
 * Return: pointer to chars printed
 */
char *buffer_long_oct(char *binary, char *octal)
{
	int op, i, j, num_oct, max;

	octal[22] = '\0';
	for (i = 63, num_oct = 21; i >= 0; i--, num_oct--)
	{
		if (i > 0)
		{
			max = 4;
		}
		else
		{
			max = 1;
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
#include "main.h"
/**
 * buffer_short_oct - prints octal characters in buffer
 * @binary: pointer to buffer converted to binary
 * @octal: pointer to buffer converted to octal
 * Return: pointer to chars printed
 */
char *buffer_short_oct(char *binary, char *octal)
{
	int op, i, j, num_oct, max;

	octal[6] = '\0';
	for (i = 15, num_oct = 5; i >= 0; i--, num_oct--)
	{
		if (i > 0)
		{
			max = 4;
		}
		else
		{
			max = 1;
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
