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
			if (str[j] == s[j])
			{
				str[j] = s1[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
