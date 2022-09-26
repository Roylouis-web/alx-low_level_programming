/**
 * _strchr - a simlilar function to strchr
 * @s: character pointer parameter to be used
 * @c: characeteer parameter to be used
 * Return: a character pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
