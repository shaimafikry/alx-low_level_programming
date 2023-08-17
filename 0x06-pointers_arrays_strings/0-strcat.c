
#include "main.h"

/**
 * _strcat - cat strings src to dest
 * @dest : a pointer to char
 * @src  : a pointer to char
 * Return: return pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int count = 0;

while (dest[i] != '\0')
{
count++;
i++;
}
i = 0;
while (src[i] != '\0')
{
count++;
dest[count] = src[i];
}
return (dest);
}