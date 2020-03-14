#include "variadic_functions.h"
/**
 * print_strings - fun print num
 * @separator: pointer
 * @n: variable int
 * @...: variadic fun
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int itera;
char *a;
va_start(valist, n);
for (itera = 0; itera < n; itera++)
{
a = va_arg(valist, char *);
if (a != NULL)
printf("%s", a);
else
printf("(nil)");
if (separator != NULL && itera < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
