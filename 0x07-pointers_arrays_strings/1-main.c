#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	char buffer[98] = {0};
	char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	_memcpy(buffer + 50, buffer2, 10);
	return (0);
}
