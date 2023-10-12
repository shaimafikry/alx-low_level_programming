#include "variadic_functions.h"
/**
 * print_strings -  print all given numbers
 * @n: unsigned int
 * @separator: const char
 * Return: no return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;
	char *test;

	i = 0;
	va_start(lst, n);
	while (i < n)
	{
		test = va_arg(lst, char *);
		if (test == NULL)
			printf("(nil)");
		else
		printf("%s", test);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(lst);
}
