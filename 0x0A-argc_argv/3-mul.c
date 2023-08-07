#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the result of multiplying two numbers
 * followed by a new line
 * @argc : is the number of command-line arguments
 * @argv : is a string of argumenst passed to main fcn
 * Return: 0 when Successful and 1 on failure
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	product = arg1 * arg2;

	printf("%d\n", product);

	return (0);
}
