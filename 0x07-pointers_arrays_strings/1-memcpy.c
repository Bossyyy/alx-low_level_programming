#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 * to a memory area
 *
 * @n: function copies
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int o = 0;

	while (o < n)
	{
		dest[o] = src[o];
		o++;
	}

	return (dest);
}
