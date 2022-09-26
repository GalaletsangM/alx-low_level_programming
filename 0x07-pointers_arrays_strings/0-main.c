#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	char buffer[98] = {0x00};

	_memset(buffer, 0x01, 95);
	return (0);
}
