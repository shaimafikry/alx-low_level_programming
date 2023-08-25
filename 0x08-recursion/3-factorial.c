#include "main.h"
/**
  * factorial - calculate a string length
  * @n: string
  * Return: factorial of a number
  */
int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
