#include <stdlib.h>
#include "main.h"
/**
 * _abs - print the absolute value
 * @j: integer
 *Return: Absolute value
 */
int _abs(int j)
{
	if (j < 0)
	{
		j = (-1) * j;
		return (j);
	}
	else
		return (j);
}
