# include <stdio.h>
/**
 *main - numbers and coms
 *Return: 0
 */
int main(void)
{
int num;
for (num = 0 ; num <= 8 ; num++)
{
putchar(num + '0');
putchar(',');
}
putchar(57);
putchar('\n');
return (0);
}
