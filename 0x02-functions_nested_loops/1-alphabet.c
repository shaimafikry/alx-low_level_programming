#include "main.h"

/**
 * main entry point
 * print alphabet
 * return 0 success
 **/
void print_alphabet(void)
/**
 *void print alphabet
 *print lower case alphabet
 * no return value
 **/
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
