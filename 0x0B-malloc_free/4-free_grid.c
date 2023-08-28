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
	while (**grid != 0)
	{
		free(*grid);
		*grid++;
	}
}
