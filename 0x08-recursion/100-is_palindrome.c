#include "main.h"
/**
  * _print_rev_recursion - prints a if a string is palindrom
  * @s: string
  * Return:  return 1 true 0 false
  */
int is_palindrome(char *s)
{
	if (*s != 0)
    {
        if (_puts_recursion(s + 1) == _print_rev_recursion(s + 1))
		return (1);
	else
		return (0);
    }
}
