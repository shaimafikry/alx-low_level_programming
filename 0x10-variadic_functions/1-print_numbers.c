#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - print all numbers with seperated string
* @separator: string to be printed between nmbers
* @n: unsigned integer
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	_putchar('\n');
	va_end(num);
}
