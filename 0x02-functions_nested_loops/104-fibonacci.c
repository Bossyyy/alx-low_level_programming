#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, separated by comma and space
 *
 * Description:
 * This program calculates and prints the first 98 Fibonacci numbers without using
 * long long, malloc, pointers, arrays/tables, or structures. The Fibonacci sequence
 * starts with 1 and 2, and each subsequent number is the sum of the two previous
 * numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 98; ++count)
	{
		sum = fib1 + fib2;
		printf(", %lu", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	printf("\n");

	return (0);
}
