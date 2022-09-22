#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit
 * @i: integer
 * Return: Answer
 */
int print_last_digit(int i)
{
	i = i % 10;
	if (i <= 0)
	{
		i *= -1;
	}
	return (i);
}
