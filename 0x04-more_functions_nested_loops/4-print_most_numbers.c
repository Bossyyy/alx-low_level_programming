#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void no 2 or 4
 */

void print_most_numbers(void)
{
        char c;

        for (c = '0'; c <= '9'; c++)
        {
                if (!(c == '2' || c == '4'))
			_putchar(c);
        }
        _putchar('\n');
}
