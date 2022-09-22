#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: The  first string
 * @s2: The second string
 *Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, flag = 0;

	for (i = 0; s1[i] || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i] && s1[i] < s2[i])
			flag = -15;
		else if (s1[i] != s2[i] && s1[i] > s2[i])
			flag = 15;
		else if (s1[i] == s2[i])
			flag = 0;
	}

	return (flag);
}
