#include "main.h"
#include <stdlib.h>

/**
 * get_func - search and return the correct function
 * @s: array to check
 * @index: index of array
 * Return: return a function
 */
int (*get_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{" %", print_perc},
		{"i", print_int},
		{"d", print_dec},
		{NULL, NULL}
	};

	int i = 0;
	int j = 0;
	int index1 = index;

	while (ops[i].frmt)
	{
		if (s[index] == ops[i].frmt[j])
		{
			if (ops[i].frmt[j + 1] != '\0')
			{
				index++;
				j++;
			}
			else
			{
				break;
			}
		}
		else
		{
			j = 0;
			i++;
			index = index1;
		}
	}
	return (ops[i].f);
}

/**
 * get_func1 - search and return the correct function
 * @s: array to check
 * @index: index of array
 * Return: return a function
 */
int get_func1(const char *s, int index)
{
print_t ops[] = {
{"c", print_char},
{"s", print_str},
{" %", print_perc},
{NULL, NULL}
};

int i = 0;
int j = 0;
int index1 = index;

while (ops[i].frmt)
{
if (s[index] == ops[i].frmt[j])
{
if (ops[i].frmt[j + 1] != '\0')
{
index++;
j++;
}
else
{
break;
}
}
else
{
j = 0;
i++;
index = index1;
}
}
return (j);
}
