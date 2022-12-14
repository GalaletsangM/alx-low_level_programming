#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Print last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d", n, lastDigit);
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
