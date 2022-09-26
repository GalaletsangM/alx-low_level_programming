#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";

	_strpbrk(s, f);
	return (0);
}
