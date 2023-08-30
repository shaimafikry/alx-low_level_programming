#include "function_pointers.h"
/**
 * int_index - that executes a function given as a parameter
 * @array: array of integers
 * @size: size of arry
 * @cmp: function
 * Return: return -1 when fails or no integer found
 *	return integer found when sucess
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size) 
	{
		if (cmp(array[i]);)
			return (i);
		i++;
	}
	return (0);
}
