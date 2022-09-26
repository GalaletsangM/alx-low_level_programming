#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');
	printf("%s\n", f);
	return (0);
}
