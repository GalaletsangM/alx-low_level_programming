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
	long int c = 0;
	char hex[] = "0123456789abcdef";

	putchar(hex[c & 0xf]);
	return (0);
}
