#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = print_last_digit(98);
	_putchar('0' + r);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
