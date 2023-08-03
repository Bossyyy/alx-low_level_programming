#include "main.h"

/**
 * check - functin that checks for the square root
 * @c:is an int
 * @d:is an int
 * Emma
 * Return: an int
 */
int check(int c, int d)
{
	if (c * c == d)
		return (c);
	if (c * c > d)
		return (-1);
	return (check(c + 1, d));
}

/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: is an integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
