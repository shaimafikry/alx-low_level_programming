#include "variadic_functions.h"
/**
 * print_all -  print all given numbers
 * @format: const char
 * Return: no return
*/
void print_all(const char * const format, ...)
{
	int i;
	va_list lst;
	char *check;

	i = 0;
	va_start(lst, format);
	while (format[i])
	{
		if (format[i] == 'c')
			printf("%c ", va_arg(lst, int));
		if (format[i] == 'i')
			printf("%d ", va_arg(lst, int));
		while (format[i] == 'f')
			printf("%f ", va_arg(lst, double));
		if (format[i] == 's')
		{
			check = va_arg(lst, char *);
			printf(check == NULL ? "(nil)" : "%s ", check);
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}
