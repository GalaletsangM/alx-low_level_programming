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
	long int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		putchar(str[i]);
		s[i / 2] = str[i];
	}
	printf("%s\n", s);
}
