#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_chessboard - print a chess board
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	char chess[8][8];

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			(*a)[8] = chess[i][j];
			printf("%c ", (*a)[8]);
			if (j == 8)
			{
				printf("\n");
			}
		}
	}
}
