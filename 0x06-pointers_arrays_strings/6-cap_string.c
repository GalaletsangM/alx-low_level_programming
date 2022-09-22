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
	int i;
	int x;

	x = strlen(n);
	for (i = 1; i < x; i++)
	{
		if (isalpha(n[i]) && (n[i - 1] == ' '))
		{
			n[i] = toupper(n[i]);
		}
	}
	return (n);
}
