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
	char *c = NULL;

	d = _strdup(c);
	if (c == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	d = _strdup(c);
	if (d == NULL)
	{
		printf("failed to allocate memory\n");
	}
	printf("%s\n", d);
	free (d);
	return (0);
}
