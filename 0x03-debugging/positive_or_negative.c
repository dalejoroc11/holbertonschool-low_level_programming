#include <stdio.h>/*library std output*/
#include <stdlib.h>/*library*/
#include <time.h>/*library time*/
/**
 *positive_or_negative - p o neg
 *@i: integer
 */
void positive_or_negative(int i)
{
if (i > 0)/*conditional if*/
{
printf("%d is positive\n", i);/*print variable*/
}
if  (i < 0)/* cond n mayor of zero*/
{
printf("%d is negative\n", i);/*print variable*/
}
if (i == 0)/* cond equal zero*/
{
printf("%d is zero\n", i);
}
}
