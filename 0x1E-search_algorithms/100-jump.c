#include "search_algos.h"

/**
 * jump_search - searches for value in sorted ary of
 * intgrs using Binary search algorithm
 * @array: to be search in
 * @size: size of array
 * @value: to search for
 * Return: 1 on found -1 if not fount
*/

int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, v;
	size_t s = sqrt(size);
	size_t m = 0;

	if (array == NULL)
		return (-1);
	while (m <= size)
	{
		if (array[m] >= value) /*safe*/
		{
			v = m - s;
			printf("Value found between indexes [%d] and [%d]\n", array[v], array[m]);
			start = m - s;
			for (; start <= m; start++)
			{
				printf("Value checked array[%ld] = [%d]\n", start, array[start]);
				{
					if (value == array[start])
						return (value);
				}
			}
		}
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);

		m += s;
	}
	return (-1);
}
