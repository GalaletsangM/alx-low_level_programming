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

	if (str == NULL)
	{
		return (NULL);
	}
	c = malloc(sizeof(char) * strlen(str) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	c = strcpy(c, str);
	return (c);
}
