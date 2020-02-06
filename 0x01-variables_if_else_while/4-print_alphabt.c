#include <stdio.h>
/**
 *main - alp
 *Return: 0
 */
int main(void)
{
char al1;
char al2;
char al3;
for (al1 = 'a'; al1 < 'e'; al1++)
{
putchar(al1);
}
for (al2 = 'f'; al2 < 'q'; al2++)
{
putchar(al2);
}
for (al3 = 'r'; al3 <= 'z'; al3++)
{
putchar(al3);
}
putchar('\n');
return (0);
}
