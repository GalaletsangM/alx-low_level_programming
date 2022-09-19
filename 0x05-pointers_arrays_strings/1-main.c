#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i = 5;
	int j = 10;

	swap_int(&i, &j);
	printf("%d \n", i);
	print("%d \n", j);
	putchar('\n');
	return (0);
}
