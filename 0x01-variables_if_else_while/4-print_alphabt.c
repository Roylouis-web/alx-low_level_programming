#include <stdio.h>
/**
*main-Entry point
*Return:Always 0 (Success)
*/
int main(void)
{char count = 'a';
do {
if (count == 'q' || count == 'e')
{count++;
continue;
}
putchar(count);
count++;
} while (count <= 'z');
putchar('\n');
return (0);
}
