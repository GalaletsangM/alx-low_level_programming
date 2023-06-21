#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocate memory of an array
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *c;
	int i = 0, l = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	c = malloc(l);

	if (c == NULL)
		return (NULL);

	while (i < l)
	{
		c[i] = 0;
		i++;
	}
	return (c);
}
