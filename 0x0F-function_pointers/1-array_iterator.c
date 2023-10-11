#include "function_pointers.h"
/**
 * array_iterator - func prints a name
 * @array: array of poineter
 * @size: size of array
 * @action: functions to be excuted
 * Return: no return
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
