#include "main.h"
/**
* print_numbers - print 0-9numbers
* Return: no return
*/
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
