#include <stdio.h>
void StartupFun(void) __attribute__ ((constructor));
/**
 * myStartupFun - function print befero main
 */
void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
