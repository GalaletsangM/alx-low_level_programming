#include <stdio.h>
/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: an array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
