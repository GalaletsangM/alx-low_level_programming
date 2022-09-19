#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	char tmp;
	int l;
	int lind;
	int rind;
	int i;

	l = strlen(s);
	lind = 0;
	rind = l - 1;
	for (i = lind; i < rind; i++)
	{
		tmp = s[i];
		s[i] = s[rind];
		s[rind] = tmp;
		rind--;
	}
	printf("%s\n", s);
}
