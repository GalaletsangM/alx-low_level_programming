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

	str = malloc(sizeof(char) * strlen(str));

	if (str == NULL)
	{
		printf("failed to allocate memory");
	}
	c = strdup(str);
	if (c == NULL)
	{
		printf("failed to allocate memory");
	}
	return (c);
}
