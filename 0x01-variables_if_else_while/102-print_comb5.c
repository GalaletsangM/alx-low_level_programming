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
	long int c;
	long int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			for (c = 0; c <= 9; c++)
			{
				for (d = c + 1; d <= 9; d++)
				{
				putchar(c + '0');
				putchar(d + '0');
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
