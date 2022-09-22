#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_array - arrays
 * @a: array of int
 * @n: the number of elements
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = k;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ((i == n - 1))
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}
