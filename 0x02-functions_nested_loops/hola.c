#include "holberton.h"
/**
 *main - printf holbi
 *Return: 0 success
 */
int main(void)
{
  char holbi[9] = "Holberton";
  int iterator;
  for (iterator = 0; iterator < 9; iterator++)
    {
      _putchar(holbi[iterator]);
    }
  _putchar('\n');
  return (0);
}
