#include "function_pointers.h"
/**
 * int_index - func prints a name
 * @array: poineter
 * @size: size of array
 * @cmp: pointer to functions to be excuted
 * Return: number of index that cmp return true
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array != NULL)
	{
		if (size <= 0)
			return (-1);
	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	}
	return (-1);
}
