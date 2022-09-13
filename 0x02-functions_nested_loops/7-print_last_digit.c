#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @c:integer parameter for the function below.
 * Return: Always Successful
 */
int print_last_digit(int c)
{int result = c % 10;
if (result < 0)
{result *= -1;
_putchar(result + '0');
}
else
{_putchar(result + '0');
}
return (result);
}
