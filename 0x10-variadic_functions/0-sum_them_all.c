#include "main.h"
/**
* sum_them_all - sum all numbers
* @n: unsigned integer
* Return: sum;

int sum_them_all(const unsigned int n, ...)
{
	usigned int sum;
	int i;

	sum = 0;
	va_list num;
	va_start(num , n);
	if (n == 0)
		return (0):
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
