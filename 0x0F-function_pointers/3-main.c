#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * Describtion: Takes 4 arguments, 2 integers,
 * 1 operator.
 * Usage:./calc(argv[0]) num1(argv[1]) operator(argv[2]) num2(argv[3])
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *operator;

	if (argc != 4)
	{
		/* error if arguments are not 4*/
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]); /* if argument is string convert to number*/
	num2 = atoi(argv[3]);
	operator = argv[2];

	/* error if operator is null or a 2d array'\*' */
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Error if user tries to devide or find modules by 0 */
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
