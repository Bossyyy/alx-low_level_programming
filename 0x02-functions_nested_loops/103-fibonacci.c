#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued terms in the Fibonacci sequence
 * that do not exceed 4,000,000.
 *
 * Description:
 * This program calculates the sum of even-valued terms in the Fibonacci sequence
 * that do not exceed 4,000,000. The Fibonacci sequence starts with 1 and 2, and
 * each subsequent number is the sum of the two previous numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum = 0, next;

	printf("%lu, %lu", fib1, fib2);

	for (count = 2; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf(", %lu", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	printf("\n");

	return (0);
}
