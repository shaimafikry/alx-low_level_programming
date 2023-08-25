#include "main.h"
/**
  * _strlen_recursion - calculate a string length
  * @s: string
  * Return: strlength
  */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != 0)
	{
		_strlen_recursion(s + 1);
		count++;
	}
	else
		return (count);
}
