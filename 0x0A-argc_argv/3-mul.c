#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiples
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int results;


	results = 0;
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i <= argc; i++)
		{
			results = results * atoi(argv[i]);
		}
		printf("%d\n", results);
	}
	return (0);
}
