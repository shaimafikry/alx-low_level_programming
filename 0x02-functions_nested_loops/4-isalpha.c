#include "main.h"
/**
 * _isalpha() - checks  alphabet
 * @c : integer
 * Return : 1 if the input is alphabet
 *		0 if it is not n aplphabet
 **/
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
