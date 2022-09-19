#include "main.h"
#include <ctype.h>
/**
 * _isupper - tests if the letter is uppercase
 * @c: input
 * Return: 1
 * else 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
