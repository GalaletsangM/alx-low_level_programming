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
	unsigned int ls1, ls2, l, k, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ls1 = strlen(s1);
	ls2 = strlen(s2);

	if (n >= ls2)
	{
		l = ls1 + ls2;
	}
	else
	{
		l = ls1 + n;
	}

	s = malloc(sizeof(char) * (l+ 1));

	if (s == NULL)
	{
		return (NULL);
	}

	while (s1[i])
	{
		s[k] = s1[i];
		i++;
		k++;
	}

	i = 0;
	while (s2[i])
	{
		s[k] = s2[i];
		i++;
		k++;
	}
	s[k] = '\0';
	return (s);
}
