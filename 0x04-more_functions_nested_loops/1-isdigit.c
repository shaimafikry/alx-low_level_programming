#include "main.h"
/**
* _isdigit - checks if number is a digit
* @c : integr
* Return: 1 if uppercase
*	0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
