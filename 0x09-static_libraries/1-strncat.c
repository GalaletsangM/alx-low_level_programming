#include "main.h"
/**
 * *_strncpy - concatenates two strings upto nth byte of source string
 * @src: source string
 * @dest: destination string
 * @n: number of bytes of src
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len_dest = 0;
	int len_src = 0;
	int i, j;

	for (; dest[len_dest] != '\0'; len_dest++)
		;
	for (; src[len_src] != '\0'; len_src++)
		;
	if (len_src > n)
	{
		for (i = 0; i < n;)
			dest[len_dest++] = src[i++];
	}
	else
	{
		for (j = 0; src[j] != '\0';)
			dest[len_dest++] = src[j++]
	}
	dest[len_dest] = '\0';
	return (dest);
}
