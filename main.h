#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct op - Struct op
 *
 * @frmt: The format
 * @f: The function associated
 */
typedef struct op
{
	char frmt;
	int (*f)(va_list);
} op_t;
int _printf(const char *format, ...);
int (*get_func(char s))(va_list list);
int _putchar(char c);
char *create_buffer(void);
void print_buffer(char *buffer, int length, va_list list);

/* printf functions */
int print_char(va_list list);
int print_str(va_list list);
int print_perc(va_list list);
int print_int(va_list list);
int print_dec(va_list list);
int print_bnry(va_list list);
int print_oct(va_list list);
int print_unsgnd(va_list list);
int print_hex(va_list list);
int print_hex_upp(va_list list);
int print_nonprint(va_list list);
int print_ptr(va_list list);
int print_revstr(va_list list);
int print_rot13(va_list list);

#endif
