#include <stdio.h>
/**
*main-prints all possible combinations of two-digit numbers
*Return:Always Successful
*/
int main(void)
{int i = 0;
int j;
while (i <= 99)
{j = 0;
while (j <= 99)
{
if (i < j)
{putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i <= 97)
{putchar(',');
putchar(' ');
}
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
