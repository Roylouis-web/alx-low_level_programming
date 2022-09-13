#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Always Successful
 */
void print_alphabet_x10(void)
{int i = 0;
char letters;
while (i < 10)
{letters = 'a';
while (letters <= 'z')
{_putchar(letters);
letters++;
}
_putchar('\n');
i++;
}
return;
}

