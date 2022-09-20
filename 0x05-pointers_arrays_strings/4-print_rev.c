#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	char r[1000];
	int begin;
	int end;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	end = count - 1;
	for (begin = 0; begin < count; begin++)
	{
		r[begin] = s[end];
		end--;
	}
	r[begin] = '\0';
	printf("%s", r);
}
