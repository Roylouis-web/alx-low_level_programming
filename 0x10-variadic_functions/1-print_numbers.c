#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: coonstant character pointer parameter
 * @n: constant unsigned integer parameter
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	if (separator != NULL)
	{
		va_list list;

		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(list, int);

			if (i != n - 1)
				printf("%d%s", num, separator);
			else
				printf("%d", num);

		}
		printf("\n");
	}
}
