#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: variable to be checked
 * Return: returns 1 if c is a digit, o if erro
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
