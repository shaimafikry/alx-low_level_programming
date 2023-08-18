#include "main.h"

/**
 * _strncat - adding n src to dest
 * @dest : a pointer to char
 * @src  : a pointer to char
 * Return: return pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int count, count2;

count = 0;
count2 = 0;
i = 0;
while (dest[i] != '\0')
{
count++;
}
while (src[i] != '\0')
{
count2++;
}
if (n > 0)
{
while(i < n)
{
dest[count +1] = src[i];
i++;
}
}
return (dest);
}