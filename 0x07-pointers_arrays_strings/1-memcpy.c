#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source code
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
