#include "main.h"
/**
* _strlen_recursion - that returns the length of a string.
* @s: string
* Return: str length
*/
int _strlen_recursion(char *s)
{
	return (0 + _strlen_recursion(s+1));
}
