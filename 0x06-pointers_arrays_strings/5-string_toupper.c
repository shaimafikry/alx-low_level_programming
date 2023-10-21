#include "main.h"
#include <stdlib.h>
/**
 * string_toupper - copy strings src to dest
 * @s: a pointer to char
 * Return: return pointer to char
 */
char *string_toupper(char *s)
{
	char *str;

	str = s;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = (*str - 32);
		str++;
	}
	return (str);
}
