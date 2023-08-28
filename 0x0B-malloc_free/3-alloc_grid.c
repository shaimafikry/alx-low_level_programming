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
	ptr = malloc(sizeof(int) * (width * height));
	if (*ptr == NULL)
	{
		free(*ptr);
		return (NULL);
	}
	for (i = 0; i < width; i++)
		for (m = 0; m < height; m++)
			ptr[i][m] = 0;
	return (ptr);
}
