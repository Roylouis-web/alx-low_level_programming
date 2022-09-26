/**
 * _strstr - similar function to strstr
 * @haystack: character pointer parametr to be used
 * @needle: character pointer parameter to be used
 * Return: a character pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i])
				return (needle);
		}
	}

}
