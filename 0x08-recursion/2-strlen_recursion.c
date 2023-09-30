#include "main.h"
/**
* _strlen_recursion - that returns the length of a string.
* @s: string
* Return: str length
*/
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
if (s[0] == '\0')
return (1);
	if (*s)
		return (1 + _strlen_recursion(s + 1));
}
