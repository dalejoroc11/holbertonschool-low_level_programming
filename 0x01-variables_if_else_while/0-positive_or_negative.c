#include <stdio.h>/*library std output*/
#include <stdlib.h>/*library*/
#include <time.h>/*library time*/
/**
 *main - positive and negative
 *
 *Return: 0
 */
int main(void)/*function*/
{
int n;/*variable n*/
srand(time(0));/*aleatorie number*/
n = rand() - RAND_MAX / 2;
if (n > 0)/*conditional if*/
{
printf("%d is positive\n", n);/*print variable*/
}
if  (n < 0)/* cond n mayor of zero*/
{
printf("%d is negative\n", n);/*print variable*/
}
if (n == 0)/* cond equal zero*/
{
printf("%d is zero\n", n);
}
return (0);/*return*/
}
