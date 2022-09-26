#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: prefix substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int results;

	results = strspn(s, accept);
	return (results);
}
