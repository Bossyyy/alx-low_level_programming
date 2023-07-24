#include "main.h"
/**
 * puts_half - prints half a string
 * then a new line
 * if it is odd, n = (length_of_the_string - 1) / 2
 * @str: is the input
 * Return: second half of string
 */
void puts_half(char *str)
{
	int b, n, longi;
	longi = 0;

	for (b = 0; str[b] != '\0'; b++)
		longi++;

	n= (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (b = n; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
