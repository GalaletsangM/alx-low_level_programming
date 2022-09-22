#include "main.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/**
 * keygen - generate random passwords
 * @n: integer
 */
void keygen(int n)
{
	int i = 0;
	int random = 0;

	srand((unsigned int)(time(NULL));

	char num[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbol[] = "!@#$%^&*?";
	char password[n];

	random = rand() % 4;

