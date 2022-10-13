#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: const character pointer parameter
 * @n: const integer pointer parameter
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *arr;
	va_list list;

	if (n > 0)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			arr = va_arg(list, char *);
			if (arr == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", arr);
			if (i != n - 1  && separator != NULL)
				printf("%s", separator);
		}

		va_end(list);
	}
	printf("\n");
}
