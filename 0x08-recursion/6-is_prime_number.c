#include "main.h"
/**
  * is_prime_number - calculate value of squared n
  * @n: integer
  * Return: result
  */
int is_prime_number(int n)
{
	int x;

	if ( n <= 0 || n == 1)
		return (0);
	x = n - 1;
	if (n == 2)
		return (1);
	if (is_prime_number(n) % x == 0)
		return (is_prime_number(x));
	else
		return (0);
}
