#include "holberton.h"
/**
 *jack_bauer - every minute of the day
 *Return: 0
 */
void jack_bauer(void)
{
char m1, m2, h1, h2, dp;
for (h1 = 48; h1 < 51; h1++)
{
if (h1 == 50)
{
dp = 52;
}
else
{
dp = 58;
}
for (h2 = 48; h2 < dp; h2++)
{
for (m1 = 48; m1 < 54; m1++)
{
for (m2 = 48; m2 < 58; m2++)
{
_putchar(h1);
_putchar(h2);
_putchar(':');
_putchar(m1);
_putchar(m2);
_putchar('\n');
}
}
}
}
}
