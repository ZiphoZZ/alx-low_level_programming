#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2 dimensional array of int
 * @width: width of array
 * @height: height of array
 * Return: pointer of array of int
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int g_out;

	if (width < 1 || height < 1)
	{
		return (NULL);
		g_out = malloc(height * sizeof(int *);
	}

	if (g_out == NULL)
	{
	free(g_out);
	return (NULL);
	}
	
	for (i = 0; i < height; i++)
	{
	g_out[i] = malloc(width * sizeof(int));
	if (g_out[i] == NULL)
	{
	for (i--; i >= 0; i--)
		free(g_out[i]);
		free(g_out);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			g_out[i][j] = 0;

	}
	return (g_out);
}
