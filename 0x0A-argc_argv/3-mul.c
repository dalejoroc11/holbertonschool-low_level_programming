#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul arguments
 * @argc: arguments
 * @argv: array
 * Return: o succes
 */
int main(int argc, char *argv[])
{
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
return (0);
}
