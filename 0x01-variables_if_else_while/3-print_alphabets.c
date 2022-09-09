#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lw = 'a';
	char up = 'A';

	while (lw <= 'z')
	{
		putchar(lw);
		lw++;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
