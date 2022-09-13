#include "main.h"
/**
 * print_sign -  prints the sign of a number.
 * @n: integer parameter for the function below
 *Return: Always Successful
*/
int print_sign(int n)
{
if (n > 0)
{_putchar('+');
return (1);
}
else if (n == 0)
{_putchar(0 + '0');
return (0);
}
else if (n < 0)
{_putchar('-');
return (-1);
}
return (0);
}
