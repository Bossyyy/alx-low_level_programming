#include "main.h"

/**
 * _strlen_recursion - function that Prints the length of a string.
 * @s: is a string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker -function that checks if s is palindrome.
 * @s: is a string base address.
 * @i: is the left index.
 * @j: is the right index.
 * Return: 1 if s is palindrom or  0 otherwise.
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - function that checks if s is palindrome
 * @s: it is the base address for string.
 *
 * Return: 1 if n is prime or 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
