#include <stdio.h>
/**
 * main - numberss
 *
 * Return: 0
 */
int main(void)
{
int n1, n2, n3, n4;
for (n1 = 48; n1 < 58; n1++)
{
for (n2 = 48; n2 < 58; n2++)
{
for (n3 = n1; n3 < 58; n3++)
{
if (n3 != n1)
{
n4 = 48;
}
else
{
n4 = n2 + 1;
}
for (; n4 < 58; n4++)
{
putchar(n1);
putchar(n2);
putchar(' ');
putchar(n3);
putchar(n4);
if (n1 == 57 && n2 == 56 && n3 == 57 && n4 == 57)
{
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
