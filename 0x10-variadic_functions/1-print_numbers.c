#include "variadic_functions.h"
/**
 * print_numbers - fun print num
 * @separator: pointer
 * @numero: unsint
 */
void print_numbers(const char *separator, const unsigned int numero, ...)
{
unsigned int i;
va_list valist;
va_start(valist, numero);
for (i = 0; i < numero; i++)
{
printf("%i", va_arg(valist, int));
if (i != (numero - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(valist);
}
