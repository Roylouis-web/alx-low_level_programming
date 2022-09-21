#include "main.h"
/**
 * rev_string - prints a string, in reverse, followed by a new line
 * @s: character parameter to be used
 * Return: void
 */
void rev_string(char *s)
{
char *start, *end, ch, len, c, i;

start = s;
end = s;
for (i = 0; *s != '\0'; i++)
{
	c++;
}
len = c;
for (i = 0; i < len - 1; i++)
{
end++;
}
for (i = 0; i < len / 2; i++)
{
ch = *end;
*end = *start;
*start = ch;
end--;
start++;
}
_putchar(*s);
}
