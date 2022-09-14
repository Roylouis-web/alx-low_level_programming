#include "main.h"
/**
 * times_table -  prints the 9 times table
 * Return: Always Successful
 */
void times_table(void)
{int num = 0;
int mul;
int product;
while (num <= 9)
{_putchar(num + '0');
mul = 1;
while (mul <= 9)
{_putchar(',');
_putchar(' ');
product = num * mul;
if (product <= 9)
{_putchar(' ');
}
else
{_putchar(product / 10 + '0');
}
_putchar(product % 10 + '0');
mul++;
}
num++;
}
_putchar('\n');
}


