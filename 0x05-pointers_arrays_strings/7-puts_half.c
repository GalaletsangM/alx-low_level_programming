#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints half of the string
 * @str: string
 */
void puts_half(char *str)
{
	int n;
	int len;
	int i;
	int mid;

	len = strlen(str);
	mid = len / 2;
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = n + 1; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = mid; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	printf("\n");
}
