#include "variadic_functions.h"
/**
 * sum_them_all -  fun to sum them all
 * @n: unsigned int
 * Return: retunrn result
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list lst;


	if (n <= 0)
		return (0);
	sum = 0;
	i = 0;
	va_start(lst, n);
	while (i < n)
	{
		sum += va_arg(lst, int);
		i++;
	}
	va_end(lst);
	return (sum);
}
