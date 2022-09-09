#include <stdio.h>
/**
*main-Entry point
*Return:Always 0 (Success)
*/
int main(void)
{char lowerCount = 'a';
char upperCount = 'A';
while (lowerCount <= 'z')
{putchar(lowerCount);
lowerCount++;
}
while (upperCount <= 'Z')
{putchar(upperCount);
upperCount++;
}
putchar('\n');
return (0);
}
