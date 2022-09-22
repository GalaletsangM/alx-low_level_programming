#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	int i = 98;

	n = print_last_digit(i);
	_putchar('0' + n);
	_putchar('\n');
	return (0);
}
