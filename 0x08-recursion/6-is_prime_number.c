#include "main.h"
/**
  * is_prime_number - calculate value of squared n
  * @n: integer
  * Return: result
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (is_prime_number(n) % (n - 1) == 0)
		return (is_prime_number(n - 1));
	else
		return (0);
}
