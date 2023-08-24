#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - print strings with seperated string
* @separator: string to be printed between nmbers
* @n: unsigned integer
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(str, char*) == NULL)
			printf("nil");
		printf("%s",va_arg(str, char*));
		if (separator != NULL)
		{
			if (i != n-1)
				printf("%s", separator);
		}
	}
	va_end(str);
	_putchar('\n');
}
