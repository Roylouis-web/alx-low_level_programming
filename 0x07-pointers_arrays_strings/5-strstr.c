/**
 * _strstr - similar function to strstr
 * @haystack: character pointer parametr to be used
 * @needle: character pointer parameter to be used
 * Return: a character pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (needle[i + j] == '\0')
				return (haystack + i);
		}
	}

	return ('\0');

}
