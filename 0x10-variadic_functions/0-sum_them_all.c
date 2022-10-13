#include "variadic_functions.h"
/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: constant integer parameter
 * Return: an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, num;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		sum += num;
	}
	va_end(list);
	return (sum);
}
