#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: possible combination of two two digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int a;
	long int b;

	for (a = 0; a <= 98; a++)
	{
		for (b = 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((b % 10) + '0');
			putchar(' ');
			putchar((a / 10) + '0');
			putchar((b % 10) + '0');
			if (a == 98  && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
