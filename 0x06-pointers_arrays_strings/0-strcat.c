#include "main.h"

/**
 * _strcat - used to concate two strings
 * @dest: is a char
 * @src: is a char
 * Return: a char
 */

char *_strcat(char *dest, char *src)
{
	char *x = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (x);
}
