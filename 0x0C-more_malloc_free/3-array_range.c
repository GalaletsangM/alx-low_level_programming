#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
