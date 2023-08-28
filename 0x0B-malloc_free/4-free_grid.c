#include "main.h"
#include <stdlib.h>
/**
* free_grid - free previous alocated memory
* @grid: pointer to be freed
* @height: pointer length
* Return: no return
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
