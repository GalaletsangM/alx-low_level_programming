#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compare two integers
 * @s1: integer 1
 * @s2: integer 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int flag = 0;
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
