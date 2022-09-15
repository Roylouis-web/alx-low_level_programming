#include "main.h"
/**
 *main - Entry point
 *Return: Always 0 Successful
 */
int main(void)
{int i;
for (i = 0; i < 100; i++)
{
if (i > 9 && i % 3 != 0 && i % 5 != 0)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(' ');
}
else if (i <= 9 && i % 3 != 0 && i % 5 != 0)
{_putchar(i + '0');
_putchar(' ');
}
else if (i % 3 == 0 && i % 5 == 0 && i != 0)
{_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
_putchar(' ');
}
else if (i % 3 == 0 && i != 0)
{_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar(' ');
}
else if (i % 5 == 0 && i != 0)
{_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
_putchar(' ');
}
}
_putchar(' ');
return (0);
}

