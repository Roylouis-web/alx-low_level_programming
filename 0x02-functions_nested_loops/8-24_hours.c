#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 * Return: Always Successful
 */
void jack_bauer(void)
{int hours;
int minutes;
int hours_remainder;
int minutes_remainder;
while (hours <= 23)
{minutes = 0;
while (minutes <= 59)
{hours_remainder = hours % 10;
minutes_remainder = minutes % 10;
_putchar(hours / 10 + '0');
_putchar(hours_remainder + '0');
_putchar(':');
_putchar(minutes / 10 + '0');
_putchar(minutes_remainder + '0');
minutes++;
_putchar('\n');
}
hours++;
}
}
