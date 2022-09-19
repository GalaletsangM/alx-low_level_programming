#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap 2 integers
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
