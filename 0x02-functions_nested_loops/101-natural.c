#include "holberton.h"
#include <stdio.h>
/**
 *main - value of an integer
 *Return: 0
 */
int main(void)
{
int sum = 0;
int ite;
for (ite = 1; ite < 1024; ite++)
{
if ((ite % 3 == 0 || (ite % 5 == 0))
{
sum = sum + ite;
}
}
printf("%d\n", sum);
return (0);
}
