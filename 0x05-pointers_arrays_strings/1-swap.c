#include "main.h"
/**
 * swap_int-it swaps the values of integers
 * @a: is one swapping integer
 * @b: is another swapping integer
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
