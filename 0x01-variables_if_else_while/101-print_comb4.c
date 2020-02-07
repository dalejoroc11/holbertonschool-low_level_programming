#include <stdlib.h>
#include <stdio.h>
/**
 * main - numbers
 *
 * Return: 0
 */
int main(void)
{
int n1, n2, n3, n4;
for (n1 = 0; n1 < 1000; ++n1)
{
n2 = (n1 / 100);
n3 = (n1 / 10) % 10;
n4 = (n1 % 10);
if (n2 < n3 && n3 < n4)
{
putchar (n2 + '0');
putchar (n3 + '0');
putchar (n4 + '0');
if (n1 < 789)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
