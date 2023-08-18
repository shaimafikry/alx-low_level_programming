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
for (i = 0;dest[i] != '\0';i++)
{
count++;
}
i = 0;
while (src[i] != '\0')
{
dest[count] = src[i];
i++;
count++;
}
return (dest);
}