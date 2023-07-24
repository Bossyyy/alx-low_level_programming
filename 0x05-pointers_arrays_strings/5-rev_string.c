#include "main.h"
/**
 * rev_string - used to reverse a string
 * @s: used to input the string
 * Return: The reversed string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int q;

	while (s[counter] != '\0')
	counter++;
	for (q = 0; q <counter; q++)
	{
		counter--;
		rev = s[q];
		s[q] = s[counter];
		s[counter] = rev;
	}
}
