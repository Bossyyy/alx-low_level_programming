#include "main.h"

/**
 * str_checker - function that checks if two strings are identical.
 * @s1: is the string_1 base address.
 * @s2: is the string_2 base address.
 * @u: is the left index.
 * @v:special index
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int str_checker(char *s1, char *s2, int u, int v)
{
	if (s1[u] == '\0' && s2[v] == '\0')
		return (1);
	if (s1[u] == s2[v])
		return (str_checker(s1, s2, u + 1, v + 1));
	if (s1[u] == '\0' && s2[v] == '*')
		return (str_checker(s1, s2, u, v + 1));
	if (s2[v] == '*')
		return (str_checker(s1, s2, u + 1, v) || str_checker(s1, s2, u, v + 1));
	return (0);
}
/**
 * wildcmp - function that checks if strings could be considered identical
 * @s1: is the base address for string.
 * @s2: is the base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
