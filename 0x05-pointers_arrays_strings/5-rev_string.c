#include "holberton.h"
/**
 * rev_string - rev string
 * @s: pointer
 */
void rev_string(char *s)
{
int i = 0, j, tmp;
char a, b;
while (s[i] != '\0')
{
i++;/*conocer tamaño*/
 }/*longitud del stringg*/
i = i - 1;
tmp = i / 2;/*j debe llegar a la mitad de la cadena*/
/*pa poder intercambiar valores*/
/*temporal i es la ultima del string*/
for (j = 0; i > tmp; i--)/*ubica en primera del stirng*/
{
a = s[i];/*ultima posicion string*/
b = s[j];
s[i] = b;
s[j] = a;
j++;
}
}
