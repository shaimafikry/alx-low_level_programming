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

	if (if (array != NULL)
		return (NULL);
	if (array != NULL)
	{
		i = 0;
		while (i != size)
		{
			(*action)(array[i]);
			i++;
		}
}
