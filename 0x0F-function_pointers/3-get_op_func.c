#include "3-calc.h"
#include <stdio.h>
/**
 * *get_op_func - select correct function
 * @s: operator passed
 * Return: answer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (s == ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
