/**
 *_abs - provides a similar function
 *@n: integer parameter to be used in the function below
 *Return: Always Successful
 */
int _abs(int n)
{
if (n < 0)
{return (n *= -1);
}
else if (n >= 0)
{return (n);
}
return (0);
}
