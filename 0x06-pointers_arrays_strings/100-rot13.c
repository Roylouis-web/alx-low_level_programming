#include "main.h"
/**
 * rot13- Prints an integer
 * @str: character pointer parameter to be used
 * Return: void
 */
char *rot13(char *str)
{
	int i, j;
	char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char toggle;

	i = 0;

	while (*(str + i))
	{
		toggle = 0;

		for (j = 0; toggle == 0 && j < 53; j++)
		{
			if (*(str + i) == a[j])
			{
				*(str + i) = c[j];
				toggle = 1;
			}
		}
		i++;
	}
	return (str);
}
