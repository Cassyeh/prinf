#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * main - sample main programs.
 * Return:  0 on success
 */
int main(void)
{
	void *addr;

	addr = (void *)0x7ffe637541f0;
	_printf("\n\n\nHere's some examples of what you could do with this custom_printf function!\n\n\n");
	printf("\n\n\nHere's some examples of what you could do with this custom_printf function!\n\n\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("10 in binary is [%b], in octal is [%o] and in hexadecimal is [%X]\n", 10, 10, 10);
	_printf("%S\n", "Best\nSchool");
	_printf("Address:[%p]\n", addr);
	_printf("2 * 2 = %+d and 5 * -5 = %+i\n", 4, -25);
	_printf("%#x\n", 31);
	_printf("%#o\n", 31);
	_printf("1 million as a long int is %ld, but as a short int is %hd\n", 1000000, 1000000);
	_printf("%ld\n", 1024L);
	_printf("%ld\n", -1024L);
	_printf("%ld\n", LONG_MAX);
	_printf("%ld\n", LONG_MIN);
	_printf("%lo\n", 0UL);
	_printf("%lo\n", ULONG_MAX);
	_printf("%lu\n", ULONG_MAX);
	_printf("%hd\n", SHRT_MAX);
	return (0);
}
