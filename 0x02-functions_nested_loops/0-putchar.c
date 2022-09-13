#include <stdio.h>
/**
 * print_string - print string
 *
 * @s: string
 */

void print_string(char *s);

/**
 * main - Entry point
 *
 * Description: Print string
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s[] = "_putchar";

	print_string(s);
	putchar('\n');
	return (0);
}

/**
 * print_string - print string
 *
 * @s: string
 */

void print_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
}
