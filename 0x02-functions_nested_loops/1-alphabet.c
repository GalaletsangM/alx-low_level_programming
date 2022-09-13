#include <stdio.h>
/**
 * print_alphabet - prints alphabets
 */
void print_alphabet(void);

/**
 * main - Entry point
 *
 * Description: Printing alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}

/**
 * print_alphabet - print alphabets in small letters
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
