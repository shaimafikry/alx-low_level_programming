#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  creates array and initialize all of it to a special char
 * @width: integer
 * @height: integer
 * Return: pointer to an array
*/
int **alloc_grid(int width, int height)
{
	int i, m;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++, grid++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (m = 0; i < i; m++)
			{
				free(grid[m]);
			}
		}
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		for (m = 0; m < width; m++)
			grid[i][m] = 0;
	return (grid);
}
