#include "main.h"
#include <ctype.h>
/**
 * _islower - check if the alphabet is a lowercase
 * @c: letter to be tested
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
