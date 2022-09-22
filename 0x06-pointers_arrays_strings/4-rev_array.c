#include "main.h"
#include <stdio.h>
/**
 * reverse_array - arrays
 * @a: array of int
 * @n: the number of elements
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int aux[n];
	int i;

	for (i = 0; i < n; i++)
	{
		aux[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
	printf(a[i]);
}
