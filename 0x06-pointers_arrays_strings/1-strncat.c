#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strncat - concatenate two integers
 * @dest: destination
 * @src: source code
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
