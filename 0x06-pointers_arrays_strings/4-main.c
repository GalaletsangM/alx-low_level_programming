#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1024, 1337};
	int n = sizeof(a) / sizeof(int);

	reverse_array(a, n);
	return (0);
}
