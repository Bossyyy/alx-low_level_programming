#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * int x, y and z
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y, z, a = 0, b = 0;

	for (x = 0; x < size; x++)
	{
		z = (x * size) + x;
		a += *(a + z);
	}
	for (y = 0; y < size; y++)
	{
		z = (y * size) + (size - 1 - y);
		b += *(a + z);
	}
	printf("%x, %i\n", a, b);
}
