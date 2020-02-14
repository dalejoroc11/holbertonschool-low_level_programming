#include "holberton.h"
#include <stdio.h>
/**
 * main - fizz buzz 
 * Return: 
 */
int main(void)
{
int i;
for ( i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
printf(" ");
}
else if (i % 5 == 0 && i != 100)
{
printf("Buzz");
printf(" ");
}
else if (i % 3 == 0)
{
printf("Fizz");
printf(" ");
}
else if (i == 100)
{
printf("Buzz");
}
else
{
printf("%d", i);
printf(" ");
}
}
printf("\n");
return (0);
}
