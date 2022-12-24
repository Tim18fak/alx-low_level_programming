#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: printint
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = | ; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

