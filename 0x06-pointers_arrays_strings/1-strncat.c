#include "main.h"

/**
 * _strncat - adding n src to dest
 * @dest : a pointer to char
 * @src  : a pointer to char
 * @n : n nmbers to be copied
 * Return: return pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int count;

count = 0;
i = 0;
while (dest[i] != '\0')
{
count++;
i++;
}
i = 0;
if (n > 0)
{
while (i < n)
{
dest[count] = src[i];
i++;
count++;
}
}
return (dest);
}
