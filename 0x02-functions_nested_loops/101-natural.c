#include "main.h"
#include <stdio.h>
/**
 * multiples - print natural numbers
 * @n: natural number
 * Return: answer
 */
int multiples(int n)
{
	int i = 0;
	int k = 0;

	while (i < n)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			k += i;
		}
		i++;
	}
	return (0);
}
