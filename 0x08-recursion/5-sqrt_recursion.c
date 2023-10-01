#include "main.h"
/**
* find_sqrt - act as a loop to find square
* @n: integer
* @i: integer that get incermented
* Return: the natural square root of a number
*/
int find_sqrt(int n, int i)
{
	if (i * i) == n)
		return i;
	else
{
	i++;
	find_sqrt(n, i);
}
}
/**
* _sqrt_recursion -  returns the natural square root of a number.
* @n: integer
* Return: the natural square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (find_sqrt(n, 1);
}
