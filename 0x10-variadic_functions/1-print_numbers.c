#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: separates numbers
 * @n: number of integers
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list mylist;

	va_start(mylist, n);

	for (i = 1; (unsigned int)i <= n; i++)
	{
		int num = va_arg(mylist, int);

		printf("%d",num);
		if((unsigned int)i != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mylist);
}
