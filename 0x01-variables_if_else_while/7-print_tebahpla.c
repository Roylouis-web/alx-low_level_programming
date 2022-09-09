#include <stdio.h>
/**
*main-Entry point
*Return:Always 0 (Success)
*/
int main(void)
{
char count = 'z';
while (count >= 'a')
{putchar(count);
count--;
}
putchar('\n');
return (0);
}
