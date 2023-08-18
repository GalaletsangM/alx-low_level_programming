#include "variadic_function.h"
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
	int sum = 0;
	va_list myList;

	va_start(myList, n);

	for (int i = 0; i < n; i++)
	{
		int x = va_arg(myList, int);
		sum += x;
	}
	va_end(myList);
	return (sum);
}
