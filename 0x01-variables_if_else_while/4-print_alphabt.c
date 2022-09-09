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

	while (c <= 'z')
	{
		putchar(c);
		c++;
		if (c == 'q' || c == 'e')
			continue;
	}
	putchar('\n');
	return (0);
}
