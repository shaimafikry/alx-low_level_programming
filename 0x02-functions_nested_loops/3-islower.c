#include "main.h"
/**
 * _islower() - checks lowercase alphabet
 * @c : integer
 * Return : 1 if true
 *		0 if false
 **/
int _islower(c)
{
	int c;

	if (c >= 97 && <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
