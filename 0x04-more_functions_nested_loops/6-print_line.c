#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: integer parameter to be use in the function
 * Return: returns an integer
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
