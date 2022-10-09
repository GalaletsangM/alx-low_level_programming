#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to char
 * Return: pointer to char
 */
char *_strdup(char *str)
{
	char *c;

	c = malloc(sizeof(char) * strlen(str));

	if (str == NULL || c == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	c = strdup(str);
	return (c);
	free(c);
}
