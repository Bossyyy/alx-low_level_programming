#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s:char
 * Return - 0; emmanuel
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursions(s + 1);
		_putchar(*s);
	}
}
