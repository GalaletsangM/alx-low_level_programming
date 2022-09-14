#include "main.h"
#include <stdio.h>
/**
 * print_sign - print the sign of a number
 * @n: integer
 * Return: 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
