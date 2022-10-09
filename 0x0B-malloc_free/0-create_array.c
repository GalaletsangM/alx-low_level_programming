#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - create an array of char, initialize it with a specific char
 * @size: size of an array
 * @c: charracter
 * Return: Array
 */
char *create_array(unsigned int size, char c)
{
	char *tr;
	unsigned int i;

	tr = malloc(size * sizeof(char));
	if (size == 0 || tr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tr[i] = c;
	}
	return (tr);
}
