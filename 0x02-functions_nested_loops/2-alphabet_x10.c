#include "holberton.h"
/**
 * print_alphabet_x10 - print
 * return: void
 */
void print_alphabet_x10(void)
{
char alp;
for (i = 0; i <= 9; i++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
