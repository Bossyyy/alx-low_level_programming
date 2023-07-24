#include "main.h"
/**
 * _puts - function prints string and new line
 * @str: this show the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
