#include "search_algos.h"

/**
 * binary_search - searches for value in sorted ary of
 * intgrs using Binary search algorithm
 * @array: to be search in
 * @size: size of array
 * @value: to search for
 * Return: 1 on found -1 if not fount
*/

int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, end = size - 1, mid = 0, i = 0;

	if (array == NULL)
		return (-1);
	while (first <= end)
	{
		printf("Searching in array: ");
		for (i = first; i <= end ; i++)
		{
			if (i == end)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = ((first + end) / 2);
		if (value > array[mid])
			first = mid + 1;
		else if (value < array[mid])
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
