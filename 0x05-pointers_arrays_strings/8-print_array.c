#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - print the arrays
 * @a: array
 * @n: number
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((i == n - 1))
		{
			continue;
		}
		printf("%d", a[i]);
		printf(", ");
	}
	printf("\n");
}
