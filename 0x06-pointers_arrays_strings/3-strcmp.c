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
	int i;
	int j;
	int k = 0;

	for (i = 0; s1[i] != '\0'; ++i)

	for (j = 0; s2[j] != '\0'; ++j)

	if (i != j)
	{
		k = s1[i] - s2[j];
	}
	else
	{
		k = 0;
	}
	return (k);
}
