#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if a string is a number
 * @str: array str
 *
 * Return: Always 0 on success
 */

int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str)) /*count string*/
	{
		if (!isdigit(str[i])) /*check if n has digit*/
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - addition
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int str_to_int;
	int sum = 0;

	while (i < argc) /*goes through the whole array*/
	{
		if (check_num(argv[i]))
		{
			str_to_int = atoi(argv[i]); /*convert to int*/
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
