#include "main.h"
/**
 * *_strcat - appends the src string to the destination string
 * @src: first string
 * @dest: destination string
 * Return: pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int len_src = 0;

	for (; dest[len_dest] != '\0'; len_dest++)
	{
		;
	}
	for (; src[len_src] != '\0' ;)
	{
		dest[len_dest++] = src[len_src++];
	}
	dest[len_dest] = '\0';
	return (dest);
}
