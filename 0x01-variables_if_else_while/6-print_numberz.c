# include <stdio.h>
/**
 *main - print numbers
 *Return: 0
 */
int main(void)
{
int numbers;
for (numbers = 0; numbers <= 9; numbers++)
{
putchar(numbers + '0');
}
putchar('\n');
return (0);
}
