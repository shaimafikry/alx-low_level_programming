#include "function_pointers.h"
/**
 * array_iterator - that executes a function given as a parameter on each element of an array
 * @array: array
 * @size: size of arry
 * @action: function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	i = 0;
	if (array != NULL)
	{
		while (i != size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
