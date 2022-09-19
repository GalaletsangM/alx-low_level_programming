#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;
	int j;
	int count;
	char *new;

	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;
	for (i = 0; i < count; i++)
	{
		new[i] = s[j];
		j--;
	}
	printf("%s", new);
}
