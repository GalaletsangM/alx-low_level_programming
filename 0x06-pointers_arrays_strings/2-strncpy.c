#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strncpy - copies a string
 * @dest: destination
 * @src: source code
 * @n: integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
