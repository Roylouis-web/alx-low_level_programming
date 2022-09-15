#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: integer parameter to be used in the in thr function
 * Return: returns an integer
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size > 0)
			{
				_putchar('#');
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
	if (size != 2)
	{
		_putchar('\n');
	}
}
