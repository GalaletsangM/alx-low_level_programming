#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - returns sum of 2 integers
 * @a: first value
 * @b: second value
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of 2 integers
 * @a: first number
 * @b: second number
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of 2 integers
 * @a: first number
 * @b: second number
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns quotient of 2 integers
 * @a: first number
 * @b: second number
 * Return: Qoutient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	else
		return (a / b);
}

/**
 * op_mod - returns remainder of 2 integers
 * @a: first number
 * @b: second number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	else
		return (a % b);

}
