#include "main.h"
/**
 * puts2 - prints every other character
 * and then a new line follows
 * @str: shows input
 * Return: Print
 */
void puts2(char *str)
{
	int longi = 0;
	int z = 0;
	char *e = str;
	int y;

	while (*e != '\0')
	{
		e++;
		longi++;
	}
	z = longi - 1;
	for (y = 0; y <= z ; y++)
	{
		if (y % 2 == 0)
	{
		_putchar(str[y]);
	}
	}
	_putchar('\n');
}
