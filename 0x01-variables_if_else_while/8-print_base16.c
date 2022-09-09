#include <stdio.h>
/**
*main-return all the numbers of base 16 in lowercase
*Return:Always 0 (Sucess)
*/
int main(void)
{int numbers = 0;
char letters = 'a';
while (numbers <= 9)
{putchar(numbers + '0');
numbers++;
}
while (letters <= 'f')
{putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
