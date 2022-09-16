#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - print from any given number to 98
 * @n: input
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else
	{
		printf("%d\n", n);
	}
}
