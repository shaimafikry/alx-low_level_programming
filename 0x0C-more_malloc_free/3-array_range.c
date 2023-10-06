#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: pointer
 * @max: pointer
 * Return: pointer to memry space
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (1 + max - min));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
