#include "variadic_functions.h"
#include <stdio.h>
/**
* print_all - print all input depends on speceifier
* @separator: string to be printed between nmbers
* @n: unsigned integer
* Return: nothing
*/
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(str, char*) == NULL)
			printf("nil");
		printf("%s",va_arg(str, char*);
		if (separator != NULL)
			printf("%s",seprator);
	}
	va_end(num);
	_putchar('\n'):
}
