#include "main.h"
/**
  * _print_rev_recursion - prints a if a string is palindrom
  * @s: string
  * Return:  return 1 true 0 false
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (check_str(*s));
}
/**
  * check_str - cheks a if a string is palindrom
  * @s: string
  * Return:  return 1 true 0 false
  */

int check_str( char *s)
{
int i, m;

m = 0
i = 0;
while (s[i] != '\0')
{
	i++;
}
i = i - 1;
while (i >= 0)
{
	if (s[i] == *s)
	{
		i--;
		m++;
	}
	else
		return 0;
}
	return 1;
}
