#include  <iostream>
#include <stdio.h>
/**
 * print_alphabet - printing alphabets in lowercase followed by new line
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; c++)
	{
		putchar(ch);
	}
}
/**
 * main - Entry point
 *
 * Description: Printing lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
