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

	arr = (int **)malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr == NULL)
		{
			free(arr);
		}
	}
	return (arr);
}
