#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from any given number to 98
 * @n: input
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		_putchar(n + '0');
	}
}
