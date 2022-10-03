#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: integer parameter
 * @height: integer parameter
 * Return: a double pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(size(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}

			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
