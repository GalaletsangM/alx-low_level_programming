#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: character
 * Return: 1 on success, 0 on otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
