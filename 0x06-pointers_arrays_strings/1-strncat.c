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
int count2;

count2 = 0;
count = 0;
for (i = 0; dest[i] != '\0'; i++)
{
count++;
}
while (src[i] != '\0')
{
count2++;
}
i = 0;
if (n > count2)
{
while (i <= count2)
{
dest[count] = src[i];
i++;
count++;
}
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
