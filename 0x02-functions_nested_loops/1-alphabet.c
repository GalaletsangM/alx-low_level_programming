#include <stdio.h>
/**
 * print_alphabet - printing alphabets in lowercase followed by new line
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
}

void print_alphabet(voi);
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
