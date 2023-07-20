#include "main.h"

/**
 *int _isdigit(int c) 
 *checks 0-9
 *
 *return 1 if c is digit else 0
 */

int _isdigit(int c)
	{
		if (c >= '0' && c <= '9')
			return (1);
		else
			return (0);
	}
