#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print combination of three numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a;
	long int b;
	long int c;

	for  (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			for (c = 1; c <= 9; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a == 7 && b == 8 && c == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
