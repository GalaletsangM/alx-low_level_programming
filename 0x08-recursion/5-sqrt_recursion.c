#include "main.h"
#include <math.h>
#include <string.h>
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int r;
	int x;

	r = sqrt(n);
	if (r * r == n)
	{
		x = r;
	}
	else if (r * r < n)
	{
		x = -1;
	}
	return (x);
}
