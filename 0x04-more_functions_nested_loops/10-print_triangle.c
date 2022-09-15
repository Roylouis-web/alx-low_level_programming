#include "main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: integer parameter to be used in the function
 * Return: returns an integer
 */
void print_triangle(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			for ((inc2 = size - inc1); inc2 > 0; inc2--)
			{
				_putchar(' ');
			}

			for (inc2 = 0; inc2 < inc1; inc2++)
			{
				_putchar('#');
			}
			_putchar('\n');

			if (inc1 == size)
			{
				continue;
			}
		}
	}
	_putchar('\n');
}
