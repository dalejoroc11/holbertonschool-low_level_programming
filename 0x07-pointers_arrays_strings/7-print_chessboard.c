#include "holberton.h"
/**
 * print_chessboard - fun print cheess
 * @a: pointer
 *
 */
void print_chessboard(char (*a)[8])
{
int ite;
int a;
for (ite = 0; ite < 8; ite++)
{
for (a = 0; a < 8; a++)
{
_putchar(a[a][a]);
}
_putchar('\n');
}
}
