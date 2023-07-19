#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued terms in the Fibonacci sequence
 *        that do not exceed 4,000,000.
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
    unsigned long int prev1 = 1, prev2 = 2, next, sum = 0;

    while (prev1 <= 4000000)
    {
        if (prev1 % 2 == 0)
            sum += prev1;

        next = prev1 + prev2;
        prev1 = prev2;
        prev2 = next;
    }

    printf("%lu\n", sum);

    return 0;
}
