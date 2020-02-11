#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int mul;
char alp;
for (mul = 0; mul <= 9; mul++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
