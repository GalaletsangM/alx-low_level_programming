#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: format of variable
 *
 */

void print_all(const char * const format, ...)
{
	int i;
	char *seperator = ",";
	char *string;
	va_list var;

	va_start(var, format);

	if (format)
	{
		while (format[i])
		{
			switch(format[i])
			{
				case 'i':
					printf("%s%d ", seperator, va_arg(var, int));
					break;
				case 'c':
					printf("%s%c", seperator, va_arg(var, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(var, double));
					break;
				case 's':
					string = va_arg(var, char*);

					if (string == NULL)
						printf("(nil)");
					printf("%s%s",seperator, string);
					break;
				default:
					i++;
					continue;
			}
			i++;
		}
	}
	printf("\n");
	va_end(var);
}
