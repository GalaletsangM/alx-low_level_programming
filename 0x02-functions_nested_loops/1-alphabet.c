#include <stdio.h>
/**
 * print_alphabet - printing alphabets
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}

/**
 * main - Entry point
 *
 * Description: Printing alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char print;

	print = print_alphabet();
	putchar(print);
	return (0);
}
