#include "main.h"
/**
 * _isalpha - function to check alphabt.
 *
 * @c: Number to pass to _isalpha function.
 *
 * Return:
 * 1 if the number is al[habet.
 * 0 if the number is not alphabet.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
