#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: The  first string
 * @s2: The second string
 *Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, flag;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			flag = s1[i] - s2[i];
			return (flag);
		}
		else if (s1[i] < s2[i])
		{
			flag = s1[i] - s2[i];
			return (flag);
		}
	}

	return (0);
}
