#include "main.h"
#include <string.h>
/**
 * _strlen - the length of a string
 * @s: string
 * Return: count
 */
int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		++count;
	}
	return (count);
}
