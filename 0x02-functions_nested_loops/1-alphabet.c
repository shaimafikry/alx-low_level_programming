#include "main.h"

/**
* main entry point
* print lower case alphapet
* return 0 always success
**/

int main(void)
{
	print_alphabet();
	return 0;
}

void print_alphabet(void)
{
	int n ;
	
	for (n = 97 ; n <= 122 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
