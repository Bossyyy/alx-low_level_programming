#include "main.h"
#include <stdio.h>
/**
 * prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alph;

	while (i <= 9)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
		i++;
	}
}
