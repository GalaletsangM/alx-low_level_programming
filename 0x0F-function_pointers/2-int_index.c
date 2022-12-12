#include "function_pointers.h"
#include <stdio>
/**
 * int_index - returns the index of the first elememt
 * @array: am array to be searched
 * @size: number of elements in the array
 * @cmp: pointer to function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		if ((cmp)(array[x]) != o)
		{
			return (x);
		}
	}
}
