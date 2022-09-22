#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = print_last_digit(98);
	printf("%d%d", n, n);
	printf("%d\n", n);
	return (0);
}
