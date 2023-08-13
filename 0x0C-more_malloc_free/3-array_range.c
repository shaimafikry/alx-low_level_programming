#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creats new array
 * @min : a pointer to string 1
 * @max : a pointer to string 2
 * Return: return a new pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *new_arr;
	int i;

	if ( min > max)
		return (NULL);
	if (max > 0)
		new_arr = malloc(sizeof(int) * ((max - min) + 1));
	else
		new_arr = malloc(sizeof(int) * (((max + min) * -1) + 1));
	if (new_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		new_arr[i] = min;
		min++;
	}
	return (new_arr);
}
