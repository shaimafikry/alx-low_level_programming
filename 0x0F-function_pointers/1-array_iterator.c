#include "function_pointers.h"
/**
 * array_iterator - that executes a function given as a parameter
 * @array: array
 * @size: size of arry
 * @action: function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	i = 0;
	if (array != NULL OR action != NULL)
	{
		while (i != size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
