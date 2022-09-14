#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check if input is alphabet
 * @c: letter
 * Return: 1 if c is a letter
 * On error, 0 is returned
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
