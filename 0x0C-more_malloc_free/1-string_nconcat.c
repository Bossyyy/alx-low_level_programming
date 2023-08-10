#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: This is the first string.
 * @s2: This is the second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_string;
	unsigned int u = 0, v = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		concat_string = malloc(sizeof(char) * (len1 + n + 1));
	else
		concat_string = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!concat_string)
		return (NULL);

	while (u < len1)
	{
		concat_string[u] = s1[u];
		u++;
	}

	while (n < len2 && u < (len1 + n))
		concat_string[u++] = s2[v++];

	while (n >= len2 && u < (len1 + len2))
		concat_string[u++] = s2[v++];

	concat_string[u] = '\0';
	return (concat_string);
}
