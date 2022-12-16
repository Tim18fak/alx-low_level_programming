#include "main.h"
/**
 * more_numbers - prints numbers to 14
 *
 * Return: return nothing
 */
void more_numbers(void)
{
char n, c;
int i = 0;

while (i < 10)
{
for (n = 0; n <= 14; n++)
{
c = n;
if (n > 9)
{
_putchar('l');

c = n % 10;
}
_putchar('0' + c);
}
_putchar('\n');
i++;
}
}

