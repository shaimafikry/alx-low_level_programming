#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - allocate memory for 2 dimential array
  * @width: integer
  * @height: integer
  * Return:  return null in failure , pointer to memory in sucess
 */
int **alloc_grid(int width, int height)
{
	int i, m;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc((width - 1) * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc((height - 1) * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (m = 0; m < i; m++)
				free(ptr[m]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < width - 1; i++)
		for (m = 0; m < height - 1; m++)
			ptr[i][m] = 0;
	return (ptr);
}
