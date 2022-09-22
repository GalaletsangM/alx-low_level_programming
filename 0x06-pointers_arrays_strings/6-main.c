#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char n[] = "text with lowercase words";
	cap_string(n);
	printf("%s\n", n);
	return (0);
}
