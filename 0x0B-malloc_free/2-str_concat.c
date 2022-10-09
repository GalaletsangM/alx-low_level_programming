#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int length;
	int i;

	length = 0;
	while (s1[length] != '\0')
	{
		++length;
	}

	for (i = 0; s2[i] != '\0'; ++i, ++length)
	{
		s1[length] = s2[i];
	}
	s1[length] = '\0';
	return (s1);
}
