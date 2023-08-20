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

	for (i = 1; (unsigned int)i <= n; i++)
	{
		const char *answer = va_arg(str, const char*);

		if (str != '\0')
		{
			if (str == NULL)
			{
				printf("(nil)");
			}
			printf("%s", answer);

			if ((unsigned int)i != n)
			{
				if (separator != NULL)
				{
					printf("%s", separator);
				}
			}
		}
	}
	printf("\n");
	va_end(str);
}
