#include <stdio.h>
/**
*main - prints all possible combinations of single-digit numbers.
*Return:Always Successful
*/
int main(void)
{int numbers = 0;
while (numbers <= 9)
{putchar(numbers + '0');
numbers++;
if (numbers <= 9)
{putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
