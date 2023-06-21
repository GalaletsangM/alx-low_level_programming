#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2 to be concatenated
 *
 * Return: new allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l = 0, ls1 = 0, ls2 = 0, ls = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[ls1])
		ls1++;
	while (s2[ls2])
		ls2++;
	if (n >= ls2)
	{
		l = ls1 + ls2;
	}
	else
	{
		l = ls1 + n;
	}
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	ls2 = 0;
	while (ls < l)
	{
		if (ls <= ls1)
			s[ls] = s1[ls];
		if (ls >= ls1)
		{
			s[ls] = s2[ls2];
			ls2++;
		}
		ls++;
	}
	s[ls] = '\0';
	return (s);
}
