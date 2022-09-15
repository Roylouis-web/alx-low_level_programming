#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 Successful
 */
int main(void)
{int i;
for (i = 0; i < 100; i++)
{
if (i > 9 && i % 3 != 0 && i % 5 != 0)
{
	printf("%d", i / 10);
	printf("%d", i % 10);
	printf(" ");
}
else if (i <= 9 && i % 3 != 0 && i % 5 != 0)
{
	printf("%d", i);
	printf(" ");
}
else if (i % 3 == 0 && i % 5 == 0 && i != 0)
{
	printf("FizzBuzz");
	printf(" ");
}
else if (i % 3 == 0 && i != 0)
{
	printf("Fizz");
	printf(" ");
}
else if (i % 5 == 0 && i != 0)
{
	printf("Buzz");
	printf(" ");
}
}
printf("\n");
return (0);
}

