#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isupper - test for upper case
 * @c: input integer
 * Return: 1
 * else return 0
 */
int  _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
