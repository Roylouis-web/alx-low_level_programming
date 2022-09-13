#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: Always Successful
 */
void print_alphabet(void)
{char letters = 'a';
while (letters <= 'z')
{_putchar(letters);
letters++;
}
_putchar('\n');
}
