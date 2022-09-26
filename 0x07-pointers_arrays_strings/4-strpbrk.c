#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes
 * Retunr: s
 * Else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *t;

	t = strpbrk(s, accept);
	if (t != NULL)
	{
		return (t);
	}
	else 
	{
		return (NULL);
	}
}
