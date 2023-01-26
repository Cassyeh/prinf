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
		{"i", print_int},
		{"d", print_dec},
		{"b", print_bnry},
		{"u", print_unsgnd},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_hex_upp},
		{"S", print_nonprint},
		{"p", print_ptr},
		{"+i", plus_int},
		{"+d", plus_int},
		{"+u", print_unsgnd},
		{"+o", print_oct},
		{"+x", print_hex},
		{"+X", print_hex_upp},
		{" i", space_int},
		{" d", space_int},
		{" u", print_unsgnd},
		{" o", print_oct},
		{" x", print_hex},
		{" X", print_hex_upp},
		{" +i", plus_int},
		{" +d", plus_int},
		{"+ i", plus_int},
		{"+ d", plus_int},
		{"#o", hash_oct},
		{"#x", hash_hex}, 
		{"#X", hash_hex_upp},
		{"#i", print_int}, 
		{"#d", print_int},
		{"#u", print_unsgnd},
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
		{"i", print_int},
		{"d", print_dec},
		{"b", print_bnry},
		{"u", print_unsgnd},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_hex_upp},
		{"S", print_nonprint},
		{"p", print_ptr},
		{"+i", plus_int},
		{"+d", plus_int},
		{"+u", print_unsgnd},
		{"+o", print_oct},
		{"+x", print_hex},
		{"+X", print_hex_upp},
		{" i", space_int},
		{" d", space_int},
		{" u", print_unsgnd},
		{" o", print_oct},
		{" x", print_hex},
		{" X", print_hex_upp},
		{" +i", plus_int},
		{" +d", plus_int},
		{"+ i", plus_int},
		{"+ d", plus_int},
		{"#o", hash_oct},
		{"#x", hash_hex}, 
		{"#X", hash_hex_upp},
		{"#i", print_int}, 
		{"#d", print_int},
		{"#u", print_unsgnd},
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
