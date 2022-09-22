#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: character pointer parameter
 * Return: returns a character pointer
 */
char *leet(char *s)
{
	int i = 0, k;
	char s0[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (s0[k] == s[i])
				s[i] = s1[k];
		}
	}

	return (s);
}
