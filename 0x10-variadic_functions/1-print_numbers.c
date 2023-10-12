#include "variadic_functions.h"
/**
 * print_numbers -  print all given numbers
 * @n: unsigned int
 * @separator: const char
 * Return: no return
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;

	i = 0;
	va_start(lst, n);
	while (i < n)
	{
		printf("%d", va_arg(lst, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(lst);
}
