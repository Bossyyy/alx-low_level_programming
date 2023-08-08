#include <stdlib.h>
#include "main.h"
/**
 * create_array -a function that creates an array of chars and
 * also initialises it with a specific char
 * @size:is the size of the array
 * @c: is the character that initialises the array
 * {Emmanuel Apeagyei)
 * Return: a pointer to the array or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);
	/*Allocating char c to all array slots*/
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
