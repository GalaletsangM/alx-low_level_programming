#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: A pointer to be filled
 * @b: This is the value to be set
 * @n: The number of bytes to be set to the value
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
