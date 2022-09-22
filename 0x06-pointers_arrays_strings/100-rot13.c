#include "main.h"
/**
 * rot13- encodes a string using rot13
 * @str: character pointer parameter to be used
 * Return: void
 */
char *rot13(char *str)
{
	int i, j;
	char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (str[i] != '\0')
	{

		for (j = 0; j < 52; j++)
		{
			if (s[j] == *(str + i)
			{
				*(str + i) = b[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
