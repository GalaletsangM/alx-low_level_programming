#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum of all parameters
 *
 * @n: first argument
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list myList;

	va_start(myList, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(myList, int);

		sum += x;
	}
	va_end(myList);
	return (sum);
}
