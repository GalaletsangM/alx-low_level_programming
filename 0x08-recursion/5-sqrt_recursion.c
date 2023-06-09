#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root
 * @n: input
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i;
	int x;

	for (i = 1; i * i <= n; i++)
	{
		if (i * i == n)
		{
			x = i;
		}
		else if (i * i < n)
		{
			x = -1;
		}
	}
	return (x);
}
