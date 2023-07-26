#include "main.h"

/**
* main entry point
* print lower case alphapet
* return 0 always success
**/

int main(void)
{
	int n;
	
	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return 0;
}
