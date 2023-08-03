#include "main.h"
/**
 * factorial -  function that returns the factorial of a given number
 * @n: Is an Int
 * Emma
 * Return: int
 */

int factorial(int n)
{
	int b;

	if (b == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		b = n * factorial(n - 1);
	}
		return (b);
}
