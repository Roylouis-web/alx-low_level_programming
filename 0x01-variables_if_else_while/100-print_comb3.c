#include <stdio.h>
/**
*main-prints all possible different combinations of two digits.
*Return:Always Successful
*/
int main(void)
{
for (int i = 0; i <= 9; i++)
{
for (int j = 0; j <= 9; j++)
{
if (i < j)
{putchar(i + '0');
putchar(j + '0');
if (i <= 7)
{putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
