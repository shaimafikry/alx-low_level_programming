#include "variadic_functions.h"
/**
* sum_them_all - sum all numbers
* @n: unsigned integer
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	int i;
	va_list num;

	sum = 0;
	va_start(num , n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
