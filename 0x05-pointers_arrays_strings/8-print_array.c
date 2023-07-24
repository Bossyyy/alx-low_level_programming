#include "main.h"
/**
 * print_array - prints n elements of array
 * @a: It is an array name.
 * @n: The number of elements to be printed
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int v;

	for (v = 0; v < (n - 1); v++)
	{
		printf("%d, ", a[v]);
	}
		if (v == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
