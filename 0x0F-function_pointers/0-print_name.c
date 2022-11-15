#include "main.h"
#include <stdio.h>
/**
 * print_name - printd name
 * @name: name to be printed
 * *f - pointer to char
 */
void print_name(char *name, void (*f)(char *))
{
	f = &print_name;

	(*f)(*name);
}
