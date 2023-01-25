#include "main.h"
#include <stdio.h>
/**
 * main - sample main programs.
 * Return:  0 on success
 */
int main(void)
{
	_printf("\n\n\nHere's some examples of what you could do with this custom_printf function!\n\n\n");
	printf("\n\n\nHere's some examples of what you could do with this custom_printf function!\n\n\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("10 in binary is [%b], in octal is [%o] and in hexadecimal is [%x]", 5, 5, 5);
	return (0);
}
