#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts_recursion - prints a string, followed by new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s);
	puts(s);
}
