#include "main.h""

/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: is an int
 * @a: is a int
 * 
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int u, v;

	for (u = 0; (u < (n - 1) / 2); u++)
		{
		v = a[u];
		a[u] = a[n - 1 - u];
		a[n - 1 - u] = v;
		}
}
