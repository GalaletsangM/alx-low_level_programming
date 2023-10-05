#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of an array
 * @height: height of an array
 * Return: returns array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;
	int k;
	int n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (arr ==  NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 1; j >= 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (n = 0; n < width; n++)
		{
			arr[k][n] = 0;
		}
	}
	return (arr);
}
