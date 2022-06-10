#include <stdio.h>
/**
 * main - prime numbers
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int num = 612852475143;
unsigned long int prim;

prim = 3;
while (prim < num / 2)
{
if ((num % prim) == 0)
{
if ((prim % 3) == 2)
printf(",%lu ", prim);
}
prim + = 2;
}
_putchar('\n');
return (0);
}
