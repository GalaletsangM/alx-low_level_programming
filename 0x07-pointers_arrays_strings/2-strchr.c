#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strchr - locate first occurrence of a character
 * @s: string
 * @c: character to be located
 * Return: s
 * Else return NULL
 */
char *_strchr(char *s, char c)
{
	char *f;

	f = strchr(s, c);
	if (f != NULL)
	{
		return (f);
	}
	else
	{
		return (NULL);
	}
}
