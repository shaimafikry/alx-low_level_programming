#include "main.h"

/**
 * string_toupper - copy strings src to dest
 * @char * : a pointer to char
 * Return: return pointer to char
 */
char *string_toupper(char *)
{
	char *str;

	if (str == NULL)
		return (-1);
	while (str != 0)
	{
		if (str >= 97 && str <= 122)
			str = str - 12;
		str++;
	}
	return (str);
}
