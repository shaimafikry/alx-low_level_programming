#include "main.h"
#include <stdlib.h>
/**
* free_grid
* @grid: pointer to be freed
* @heaight pointer length
* Return: no return
*/
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while ( i != height)
	{
		free(grid[i]);
		i++;
	}
}
