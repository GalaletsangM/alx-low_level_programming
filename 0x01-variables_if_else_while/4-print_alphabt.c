#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: eclude q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	do {
		if (c != 'q' || c != 'e')
			putchar(c);
		else
			continue;
		c++;
	} while (c <= 'z');

	putchar('\n');
	return (0);
}
