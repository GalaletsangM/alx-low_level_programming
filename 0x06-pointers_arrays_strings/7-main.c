#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	return (0);
}
