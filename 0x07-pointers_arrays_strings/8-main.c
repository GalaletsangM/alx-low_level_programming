#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	int c3[3][3] = {
		{0, 1, 5},
		{10, 11, 12},
		{1000, 101, 102},
	};

	print_diagsums((int *)c3, 3);
	return (0);
}
