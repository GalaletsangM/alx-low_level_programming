#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_diagsums - print sum of diagonal
 * @a: pointer array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0;
	int diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diag1 += a[(size + 1) * i];
		diag2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", diag1, diag2);
}
