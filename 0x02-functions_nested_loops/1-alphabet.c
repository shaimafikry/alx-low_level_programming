#include "main.h"

/**
* function entry point
* print alphabet
*no return value
**/
void print_alphabet(void)
{
	int n;
	
	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
