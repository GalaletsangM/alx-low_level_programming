#include "main.h"
#include <string.h>
#include <stdio.h>

int the_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (the_sqrt_recursion(n, 0));
}

/**
 * the sqrt_recursion - recursing to find the actual
 * square root of a number
 * @n: number to be checked
 * @i: iterator
 *
 * Return: squre root
 */

int the_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (the_sqrt_recursion(n, i + 1));
}
