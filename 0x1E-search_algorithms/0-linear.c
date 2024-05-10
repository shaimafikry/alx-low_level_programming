#include "search_algos.h"
/**
 * linear_search - searches for a value in array using Linear search algorithm
 * @array:array to search in
 * @size: size of array
 * @value: to search for
 * Return: 1 on found -1 if not fount
*/


int linear_search(int *array, size_t size, int value)
{
	while (array != NULL)
	{
		size_t i = 0;

		while (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
		return (-1);
	}
	return (-1);
}
