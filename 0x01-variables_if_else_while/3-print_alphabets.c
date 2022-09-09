#include <stdio.h>
/**
*main-Entry point
*Return:Always 0 (Success)
*/
int main(void)
{
char count = 'a';
char upperCount = 'A';
while (count <= 'z')
{putchar(count);	
count++;
}
while (upperCount <= 'Z')
{putchar(upperCount);
upperCount++;
}
putchar('\n');
return (0);
}
