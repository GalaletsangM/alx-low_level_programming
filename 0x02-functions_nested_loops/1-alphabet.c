#include <stdio.h>
/**
 * print_alphabet - print alphabets
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
}

/**
 * main - Entry point
 *
 * Description: Print alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	putchar(print_alphabet());
	return (0);
}
