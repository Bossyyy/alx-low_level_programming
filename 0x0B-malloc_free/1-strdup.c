#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the
 * string given as a parameter
 * @str: is the string to be newly allocated in memory
 * Return: NULL if the string is empty or insufficient memory
 * function returns pointer to the duplicated string (Success)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int u, len;

	u = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[u] = str[u]) != '\0')
		u++;

	return (dup);
}
