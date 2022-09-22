#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: string
 */
char *rot13(char *str)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	char *strcopy = str;

	while (*str != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == in[i])
			{
				*str = out[i];
				break;
			}
			str++;
		}
	}
	return (strcopy);
}
