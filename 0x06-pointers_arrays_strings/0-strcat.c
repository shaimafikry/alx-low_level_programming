#include "main.h"

/**
 * _strcat - cat strings src to dest
 * @dest : a pointer to char
 * @src  : a pointer to char
 * Return: return pointer to dest
 */

char *_strcat(char *dest, char *src)
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
count++;
while (src[i] != '\0')
{
dest[count] = src[i];
i++;
count++;
}
return (dest);
}
