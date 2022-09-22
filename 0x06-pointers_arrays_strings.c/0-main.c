#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char a[] = "Hello ";
	char b[] = "World\n";
	char *ptr;

	ptr = _strcat(a, b);
	printf("%s", ptr);
	return (0);
}
