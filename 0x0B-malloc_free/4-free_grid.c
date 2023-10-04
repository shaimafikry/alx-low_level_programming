#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid -  function that frees a 2 dimensional grid previously created
 * @height: integer
 * Return: pointer to an array
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		free(grid);
	}
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
