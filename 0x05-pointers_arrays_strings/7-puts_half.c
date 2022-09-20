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
		putchar(str[n]);
	}
	else
	{
		for (i = mid; i <= len; i++)
		{
			putchar(str[i]);
		}
	}
	printf("\n");
}
