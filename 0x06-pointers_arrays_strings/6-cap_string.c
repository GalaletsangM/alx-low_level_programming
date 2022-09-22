#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * *cap_string - capitalize all words
 * @n: string
 * Return: string
 */
char *cap_string(char *n)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i;
	int j;

	for (i = 0; (*(n + i) != '\0'); i++)
	{
		if (*(n + i) >= 'a' && *(n + i) <= 'z')
		{
			if (i == 0)
			*(n) += ('A' - 'a');
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (*(n + i - 1) == sep[j])
					*(n + i) += ('A' - 'a');
				}
			}
		}
	}
	return (n);
}
