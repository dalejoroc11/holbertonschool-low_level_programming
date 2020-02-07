# include <stdio.h>
/**
 *main - numbers and coms
 *Return: 0
 */
int main(void)
{
int num;
int num1;
for (num = '0' ; num <= '9'; num++)
{
for (num1 = '0' ; num1 <= '9'; num1++)
{
putchar(num);
putchar(num1);
if (num == '9' && num1 == '9')
{
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
