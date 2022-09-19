/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: character parameter to be used
 * Return: void
 */
void print_rev(char *s)
{
	int i, c, k;
	char *a, aux;

	a = s;
	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
	_putchar('\n');
}
