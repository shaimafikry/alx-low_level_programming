#include "main.h"

/**
* main entry point
* print lower case alphapet
* return 0 always success
**/

void print_alphabet()
{
	int n ;
	
	for (n = 97 ; n <= 122 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return 0;
}
