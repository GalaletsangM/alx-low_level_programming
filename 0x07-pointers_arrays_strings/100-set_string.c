#include "main.h"
#include <stdio.h>
/**
 * set_string - sets value of a pointer to a char
 * @s: double pointer
 * @to: single pointer
 */
void set_string(char **s, char *to)
{
	s = &to;
	printf("%s, %s\n", *s, to);
}
