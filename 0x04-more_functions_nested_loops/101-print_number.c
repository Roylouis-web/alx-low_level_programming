#include <stdio.h>
#include "main.h"
/**
 * print_number -  function that prints an integer.
 * @n - integer parameter for the function below
 * Return: returns an integer
 */
void print_number(int n)
{
	unsigned int num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
