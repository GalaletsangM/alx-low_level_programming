#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * *string_toupper - change string from lowercase to uppercase
 * @n: string
 * Return: ch
 */
char *string_toupper(char *n)
{
	int j = 0;

	while (n[j] != '\0')
	{
		if (n[j] >= 'a' && n[j] <= 'z')
		{
			n[j] = n[j] - 32;
		}
		j++;
	}
	return (n);
}
