#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}
		putchar('\n');
	}
}
