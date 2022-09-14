#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer parameter to be used in the function
 * Return Always Successful
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n > 98)
{_putchar(n-- + '0');
_putchar(n + '0');
}
}
else
{
while (n < 98)
{_putchar(n++ + '0');
_putchar(n + '0');
}
}
}
