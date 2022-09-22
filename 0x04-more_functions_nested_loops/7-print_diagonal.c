#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - print diagonal
 * @n: input
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					putchar('\\');
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
		putchar('\n');
	}
}
