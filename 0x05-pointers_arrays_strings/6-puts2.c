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

	for (i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
		s[i / 2] = str[i];
	}
	printf("%s\n", s);
}
