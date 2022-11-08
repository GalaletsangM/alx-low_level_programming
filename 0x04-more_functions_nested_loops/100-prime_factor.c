#include "main.h"
#include <stdio.h>
/**
 * prime_factor - find the prime factor
 * @num: number
 */
void prime_factor(long int num)
{
	long int div = 2, max;

	while (num != 0)
	{
		if ((num % div) != 0)
		{
			div = div + 1;
		}
		else
		{
			max = num;
			num = num / div;
			if (num == 1)
			{
				printf("%ld", max);
				break;
			}
		}
	}
}
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	prime_factor(6128524475143);
	printf("\n");
	return (0);
}
