#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: results
 */
char *_strstr(char *haystack, char *needle)
{
	char *results;

	results = strstr(haystack, needle);
	if (results != NULL)
	{
		return (results);
	}
	else
	{
		return (NULL);
	}
}
