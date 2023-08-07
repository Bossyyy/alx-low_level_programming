#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the number of arguments passed to the program
 * which is followed by a new line
 * @argc : is the number of command-line arguments
 * @argv : is a string of arguments passed to main function
 * Return: 0 (Success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
