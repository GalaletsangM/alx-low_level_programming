#include "main.h"
#include <ctype.h>
/**
 * _isdigit - test if is digit
 * @c: input
 * Return: 1
 * else 0
 */
int _isdigit(int c)
{
	if  (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
