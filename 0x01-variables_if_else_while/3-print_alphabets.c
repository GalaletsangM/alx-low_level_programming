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

	while (lw <= 'z' && up <= 'Z')
	{
		putchar(lw);
		putchar(up);
		lw++;
		up++;
	}
	putchar('\n');
	return (0);
}
