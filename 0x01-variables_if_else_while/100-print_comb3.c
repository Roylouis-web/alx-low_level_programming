#include <stdio.h>
/**
*main-prints all possible different combinations of two digits.
*Return:Always Successful
*/
int main(void)
{
int i = 0;
int j;
while (i <= 9)
{j = 0;
while (j <= 9)
{
if (i < j)
{putchar(i + '0');
putchar(j + '0');
if (i <= 7)
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
