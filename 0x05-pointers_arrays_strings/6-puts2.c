#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - print every other string
 * @str: input string
 */
void puts2(char *str)
{
	char s[] = " ";
	int i;
	int len

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
		s[i / 2] = str[i];
	}
	printf("%s\n", s);
}
