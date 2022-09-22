#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char s[] = "ROT13 (\"rotate by 13 places\"\n";
	char *p;

	p = rot13(s);
	printf("%s", p);
	return (0);
}
