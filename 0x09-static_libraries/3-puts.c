#include "main.h"
/**
 * _puts - prints a string followed by new line
 * @str: string
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
