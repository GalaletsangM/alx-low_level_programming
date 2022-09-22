#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char a[] = "Hello ";
	char b[] = "World\n";
	char *ptr;
	int n = 3;

	ptr = strncat(a, b, n);
	printf("%s", ptr);
	putchar('\n');
	return (0);
}
