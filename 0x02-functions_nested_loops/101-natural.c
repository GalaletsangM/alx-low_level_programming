#include "main.h"
#include <stdio.h>
/**
 * multiples - print natural numbers
 * @n: natural number
 * Return: answer
 */
int multiples(int n)
{
	n = 10;
	int a = 0;
	int i = 0;
	int k = 0;

	while (a < 10)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			k += i;
		}
		i++;
	}
	return (0);
}
