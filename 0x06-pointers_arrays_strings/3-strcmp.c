#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - compare two integers
 * @s1: integer 1
 * @s2: integer 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int results;
	
	results = strcmp(s1, s2);
	if (results > 0)
	{
		return (15);
	}
	else if (results < 0)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
