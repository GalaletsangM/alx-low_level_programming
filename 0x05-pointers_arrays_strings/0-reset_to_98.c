#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - reset to 98
 * @n: integer
 */
void reset_to_98(int *n)
{
	int p;

	p = 98;
	n = &p;
	printf("%d", *n);
}
