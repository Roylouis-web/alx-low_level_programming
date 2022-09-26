/**
 * _strpbrk - a similar function to strpbrk
 * @s: character pointer paarmeter to be used
 * @accept: character pointer parameter to be used
 * Return: a character pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (0);
}
