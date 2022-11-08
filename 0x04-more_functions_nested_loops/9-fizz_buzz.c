#include <stdio.h>
/**
 * fizzBuzz - fizzBuzz game
 * @num: number 1 to 100
 */
void fizzBuzz(int num)
{
	int i;

	for (i = 1; i <= num; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3 == 0))
		{
			printf("Fizz ");
		}
		else if ((i % 5 == 0))
		{
			if (i == num)
			{
				printf("Buzz");
				break;
			}
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	fizzBuzz(100);
	return (0);
}
