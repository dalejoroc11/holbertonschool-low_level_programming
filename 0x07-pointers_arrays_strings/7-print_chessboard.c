#include "holberton.h"
/**
 * print_chessboard - fun print cheess
 * @a: pointer
 *
 */
void print_chessboard(char (*a)[8])
{
int ite;
int b;
for (ite = 0; ite < 8; ite++)
{
for (b = 0; b < 8; b++)
{
_putchar(a[ite][b]);
}
_putchar('\n');
}
}
