#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute a function
 * @array: array to be executed
 * @size: size of array
 * @action: pointer to a funtion
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
