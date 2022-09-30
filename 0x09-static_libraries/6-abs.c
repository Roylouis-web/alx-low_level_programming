/**
 *_abs - provides a similar function
 *@c: integer parameter to be used in the function below
 *Return: Always Successful
 */
int _abs(int c)
{
if (c < 0)
{return (c *= -1);
}
else if (c >= 0)
{return (c);
}
return (0);
}
