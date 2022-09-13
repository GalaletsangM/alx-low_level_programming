#include "main.h"
/**
 * print_alphabet - printing alphabets
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
 * print_alphabet - printing the alphabets
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
