#include <stdio.h>
/**
* main - main block
* Description: prints the sum of the even-valued terms, followed by a new line..
* Numbers must be coma and space separated.
* Return: 0
*/
int main(void)
{int count = 3;
long int first = 1, second = 2;
long int next = first + second;
printf("%lu, ", first);
printf("%lu, ", second);
while (count <= 50)
{
if (count == 50)
{printf("%lu\n", next);
}
else
{printf("%lu, ", next);
}
first = second;
second = next;
next = first + second;
count++;
}
return (0);
}

