#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char a[20];
	char b[20];
	int c;

	c = _strcmp(a, b);
	printf("%d\n", c);
	return (0);
}
