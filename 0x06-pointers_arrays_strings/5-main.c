#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	putchar('\n');
	return (0);
}
