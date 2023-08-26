#include "main.h"
/**
 * _islower - checks lowercase alphabet
 * @c : integer
 * Return:
 * 1 if alphbet is lowercase
 * 0 if alphabet is uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
