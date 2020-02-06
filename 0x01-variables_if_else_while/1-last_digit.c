#include <stdio.h>/*libraries*/
#include <stdlib.h>
#include <time.h>
/**
 *main - last digit
 *Return: 0
 */
int main(void)/*function main*/
{
int n = 0;/*variables*/
int lastDigit = 0;
srand(time(0));/*aleatiorie numbers*/
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;/*module for last number*/
if (lastDigit > 5)/*conditionals*/
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else if (lastDigit < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}

