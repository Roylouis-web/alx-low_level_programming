#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: char function [arameter to be used
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < sizeof(a); i++)
	{
		for (j = 0; j < sizeof(a); j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
