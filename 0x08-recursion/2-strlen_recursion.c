#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int u = 0;

	if (*s)
	{
		u++;
		u += _strlen_recursion(s + 1);

	}
	return (u);
}
