#include "main.h"
#include <stdlib.h>
/**
* free_grid
* @grid: pointer to be freed
* @height pointer length
* Return: no return
*/
void free_grid(int **grid, int height)
{
	int i, m;

	m = 0;
	for (i = 0; i < height; i++)
		while (grid[i][m] != '\0')
		{
			free(grid[i][m]);
			m++;
		}
}
