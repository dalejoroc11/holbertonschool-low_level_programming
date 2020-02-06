#include <stdio.h>
/**
 *main - alp
 *Return: 0
 */
int main(void)
{
char al1;
for (al1 = 'a'; al1 <= 'z'; al1++)
{
if (al1 != 'e' && al1 != 'q')
putchar(al1);
}
putchar('\n');
return (0);
}
