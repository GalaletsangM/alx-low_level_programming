#include <stdio.h>
/**
* main - Entry point
*
* Description: Hexadecimal
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long int c;
	char hex[] = "0123456789abcdef";

	for (c = 0; c <= 0xf; c++)
	{
		putchar(hex[c & 0xf]);
		if (c == 'f')
			break;
	}
	putchar('\n');
	return (0);
}
