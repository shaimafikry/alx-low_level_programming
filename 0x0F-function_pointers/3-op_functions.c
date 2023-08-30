#include "function_pointers.h"
/**
 * op_add -  add two digits
 * Return:  return result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -  sub two digits
 * Return: resul
 */
int op_sub(int a, int b)
{
	return (a - b;
}
/**
 * op_mul -  mull two digits
 * Return: return result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -  div two digits
 * Return:  result
 */
int op_div(int a, int b)
{
{
	if ( b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a /b);
}
/**
 * op_mod -  a mod b
 * Return: result
 */
int op_mod(int a, int b)
{
	if ( b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
