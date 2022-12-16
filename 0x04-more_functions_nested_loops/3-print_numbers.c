#include "main.h"

/**
 * print_number - print 0 - 9
 *
 * Return: void
 */

void print_number(void)
{
	char a = 0;

	while (a  <= 9)
	{
		-putchar(a + 0);
		a++;
	}
	_putchar('\n');
}
