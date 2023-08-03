nclude "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: It is a string.
 * Return: An int
 * Emma
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
