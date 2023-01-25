#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct print - Struct print
 *
 * @frmt: The format
 * @f: The function associated
 */
typedef struct print
{
char *frmt;
int (*f)(va_list, char *, unsigned int);
} 
print_t;
int _printf(const char *format, ...);
int (*get_func(const char *s, int index))(va_list list, char *, unsigned int);
int get_func1(const char *s, int index);
int _putchar(char c);
int print_buffer(char *buffer, unsigned int length);
unsigned int buffer_input(char *buffer, char c, unsigned int length);
char *buffer_binary(char *binary, long int num_input, int num_neg, int max);
char *buffer_oct(char *binary, char *octal);
char *buffer_hex(char *binary, char *hex, int isupper, int max);

/* printf functions */
int print_char(va_list list, char *buffer, unsigned int length);
int print_str(va_list list, char *buffer, unsigned int length);
int print_perc(va_list c __attribute__((unused)),
char *, unsigned int);
int print_int(va_list list, char *buffer, unsigned int length);
int print_dec(va_list list, char *buffer, unsigned int length);
int print_bnry(va_list list, char *buffer, unsigned int length);
int print_oct(va_list list, char *buffer, unsigned int length);
int print_unsgnd(va_list list, char *buffer, unsigned int length);
int print_hex(va_list list, char *buffer, unsigned int length);
int print_hex_upp(va_list list, char *buffer, unsigned int length);
int print_nonprint(va_list list, char *buffer, unsigned int length);
int print_ptr(va_list list, char *buffer, unsigned int length);
int print_revstr(va_list list);
int print_rot13(va_list list);

#endif
