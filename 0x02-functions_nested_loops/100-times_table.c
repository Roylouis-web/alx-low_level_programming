#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n : integer parameter to be used in the finction
 * Return: none.
 */
void print_times_table(int n)
{int rows = 0, columns = 0, multi;
for (rows = 0; rows <= n; rows++)
{_putchar('0');
for (columns = 1; columns <= n; columns++)
{multi = rows * columns;
if (multi < 10)
{_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(multi % 10 + '0');
}
else if (multi >= 10)
{_putchar(',');
_putchar(' ');
_putchar(multi / 10 + '0');
_putchar(multi % 10 + '0');
}
if (n > 15 || n < 0)
_putchar(0 + '0');
}
_putchar(10);
}
}
