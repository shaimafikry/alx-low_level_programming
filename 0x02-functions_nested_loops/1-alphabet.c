#include "main.h"

/**
* main entry point
* print alphabet
* return 0 success
**/
/**
*void print alphabet 
*print lower case alphabet 
* no return value
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
