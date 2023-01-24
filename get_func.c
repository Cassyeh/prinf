#include "main.h"
#include <stdlib.h>

/**
 * get_func - search and return the correct function
 * @s: array to check
 * Return: return a function
 */
int (*get_func(char s))(va_list)
{
	op_t ops[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_perc},
		{'d', print_dec},
		{'i', print_int},
		{'b', print_bnry},
		{'o', print_oct},
		{'u', print_unsgnd},
		{'x', print_hex},
		{'X', print_hex_upp},
		{'\0', NULL}
	};

	int i, j = 0;

	for (i = 0; ops[i].frmt != '\0'; i++)
	{
		if (s == ops[i].frmt)
		{
			return (ops[i].f);
		}
		i++;
	}
	if (ops[i].frmt == '\0')
	{
		if (s == '\0')
		{
			return (-1);
		}
		j = j + _putchar('%');
		if ((s - 1) == ' ')
		{
			j = j + _putchar(' ');
		}
		j = j + _putchar(s);
		return (j);
	}
	return (-1);
}
