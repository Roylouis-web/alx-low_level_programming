#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5
 * int : Returns nothing
 *
 * Returns:Always Successful
 */
int main(void)
{int sum = 0;
int nums = 1;
while (nums < 1024)
{
if (nums % 3 == 0 || nums % 5 == 0)
{sum += nums;
}
nums++;
}
printf("%d", sum);
return (0);
}
