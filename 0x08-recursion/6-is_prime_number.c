#include "main.h"
/**
* find_prime - loop to check prime
* @n: integer
* @i: integer
* Return: returns 1 if found 0 if not
*/
int find_prime(int n, int i)
{
if (n == i)
return (1);
if (n % i == 0)
return (0);
i++;
return (find_prime(n, i));
}
/**
* is_prime_number - function that returns 1 if number is prime and 0 if not
* @n: integer
* Return: returns 1 if prime 0.if not
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2)
return (1);
if (n % 2 == 0)
return (0);
return (find_prime(n, 3));
}
