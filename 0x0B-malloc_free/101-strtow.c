#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, g, w;

	flag = 0;
	w = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}
/**
 * **strtow - function that splits a string into words
 * @str: this is the string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int u, v = 0, len = 0, words, g = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (u = 0; u <= len; u++)
	{
		if (str[u] == ' ' || str[u] == '\0')
		{
			if (g)
			{
				end = u;
				tmp = (char *) malloc(sizeof(char) * (g + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[v] = tmp - g;
				v++;
				g = 0;
			}
		}
		else if (g++ == 0)
			start = u;
	}
	matrix[v] = NULL;
	return (matrix);
}
