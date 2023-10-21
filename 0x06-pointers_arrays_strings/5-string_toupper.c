#include "main.h"
#include <stdlib.h>
/**
 * string_toupper - copy strings src to dest
 * @str: a pointer to char
 * Return: return pointer to char
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str = (*str - 12);
		str++;
	}
	return (str);
}
