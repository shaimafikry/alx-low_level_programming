#include "main.h"
/**
  * is_prime_number - calculate value of squared n
  * @n: integer
  * Return: result
  */
/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @c: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, i + 1));
}
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (is_prime(n, 2));
}
