#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: seperates the string
 * @n: number of strings
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list str;

	va_start(str, n);

	for (i = 0; (unsigned int)i < n; i++)
	{
		char answer = va_arg(str,const char);
		printf("%s %s", separator, answer);
	}
	va_end(str);
}
