#include "main.h"

/**
 * _strncpy - is a function that copies strings
 * @dest: is a char
 * @src: is a char
 * @n: is the length of int
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int u;

	for (u = 0; u < n && *(src + u); u++)
	{
	*(dest + u) = *(src + u);
	}
	for (; u < n; u++)
	{
	*(dest + u) = '\0';
	}
	return (dest);

}	
