#include "main.h"
#include <stdio.h>
/**
 * _strncat - adding n src to dest
 * @dest : a pointer to char
 * @src  : a pointer to char
 * @n : n nmbers to be copied
 * Return: return pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, co_dest, count2;

	count2 = 0, co_dest = 0;
	for (i = 0; dest[i] != '\0'; i++)
		co_dest++;
	for (i = 0; src[i] != '\0'; i++)
		count2++;
	if (n > count2)
	{
		for (i = 0; i <= count2; i++)
		{
			dest[co_dest] = src[i];
			co_dest++;
		}
	}
	for (i = 0; i < n; i++)
	{
		dest[co_dest] = src[i];
		co_dest++;
	}
	return (dest);
}
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
