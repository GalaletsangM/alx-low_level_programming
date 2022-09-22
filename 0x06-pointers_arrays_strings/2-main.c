#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char a[98] = "My name is Galaletsang";
	char b[50];
	int n = 7;

	_strncpy(b, a, n);
	b[n] = '\0';
	printf("%s", b);
	putchar('\n');
	return (0);
}
