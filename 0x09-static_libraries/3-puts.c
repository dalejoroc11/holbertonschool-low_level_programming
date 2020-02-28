#include "holberton.h"
#include <stdio.h>
/**
 * _puts - put string
 * @str: string
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
/**(str + i) iterator to recorrer phrase*/
i++;
}
_putchar('\n');
}
