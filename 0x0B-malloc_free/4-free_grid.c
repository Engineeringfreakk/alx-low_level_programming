#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid input
 * @height: grid height
 * Return: 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
