#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: New pointer
 */

char *argstostr(int ac, char **av)
{
	int i;
	int len = 1;
	char *all_av;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	all_av = malloc(sizeof(char) * (len + 1));
	all_av[0] = '\0';

	for (i = 1; i < ac; i++)
	{
		strcat(all_av, av[i]);
		all_av = '\n';
	}
	return (all_av);

	free(all_av);
}
