#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int t1;
	int t2;
	int t3;
	int i;
	char *a;

	t1 = strlen(s1);
	t2 = strlen(s2);
	t3 = t1 + t2 + 1;
	a = malloc(sizeof(char) * t3);

	for (i = 0; i < t1; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i < s2; i++)
	{
		a[1 + s1] = s2[i];
	}
	a[i] = '\0';
	return (a);
}
