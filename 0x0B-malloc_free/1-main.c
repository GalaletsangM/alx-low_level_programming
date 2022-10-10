#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	char *d;
	char c = "Hello";

	d = _strdup(c);
	if (d == NULL || c == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", d);
	free (d);
	return (0);
}
