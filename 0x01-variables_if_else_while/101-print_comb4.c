#include <stdio.h>
/**
 *main - prints all possible different combinations of three digits.
 *Return: Always Success
 */
int main(void)
{int i = 0;
int j;
int k;
while (i <= 9)
{j = 0;
while (j <= 9)
{k = 0;
while (k <= 9)
{
if (k > j && j > i)
{putchar(i + '0');
putchar (j + '0');
putchar (k + '0');
if (i <= 6)
{putchar (',');
putchar (' ');
}
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
