#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	i = (strlen(s));
	return (i);
}
