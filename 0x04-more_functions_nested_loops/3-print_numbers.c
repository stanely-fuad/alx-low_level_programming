#include "main.h"

/**
 * print_numbers - Prints 0 to 9
 *
 * Return: The numbers 0 - 9
 */
void print_numbers(void)
{
int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
