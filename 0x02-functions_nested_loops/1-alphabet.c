#include "holberton.h"
/**
 * print_alphabet - alphabet
 *
 * Return: 0 sucess
 */
void print_alphabet(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
