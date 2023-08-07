#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that adds argument from the commmand
 * @argc: shows the number of arguments
 * @argv: shows the arguments
 * Return: 0 (success), 1 (failure)
 */
int main(int argc, char *argv[])
{
	int sum, num, digit;

	sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit] != '\0'; digit++)
		{
			if (!isdigit(argv[num][digit]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
