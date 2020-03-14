#include "variadic_functions.h"
/**
 *print_all - fun print everything
 *@: pointer const
 *@format: const
 *Return: 0
 */
void print_all(const char * const format, ...)
{
va_list valist;/*define valist*/
int b = 0, c = 0, a = 0;/*define parameters*/
char *aa;/*define`pouinter*/
while (format[b])
b++;/*cointer*/
va_start(valist, format);
while (c < b)
{
switch (format[c])/*switch*/
{
case 'c':
printf("%c", va_arg(valist, int));
a = 1;
break;
case 'i':
printf("%d", va_arg(valist, int));
a = 1;
break;
case 'f':
printf("%f", va_arg(valist, double));
a = 1;
break;
case 's':
aa = va_arg(valist, char *);
if (aa == NULL)
aa = "(nil)";
printf("%s", aa);
a = 1;
break;
}
if (c < b - 1 && a == 1)
{
a = 0;
printf(", ");
}
c++;
}
printf("\n");
va_end(valist);
}
