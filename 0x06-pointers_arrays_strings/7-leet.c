#include "main.h"
#include <stdio.h>
/**
 * *leet - encodes a string into 1337
 * @n: string
 * Return: string
 */
char *leet(char *n)
{
	int a;
	int b;

	char *replace = "aAeEoOtTlL4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (n[a] == replace[b])
			{
				n[a] = replace[b + 10];
			}
		}
	}
	return (n);
}
