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
	int i;
	va_list str;

	va_start(str, format);
	while (va_list str)
	{
		if (va_arg(str, char*) == NULL)
			printf("nil");
		printf("%s",va_arg(str, char*);
		printf("%d",va_arg(str, int));
		printf("%c",va_arg(str, char));
		printf("%f",va_arg(str, float));
	}
	va_end(str);
	_putchar('\n'):
}
