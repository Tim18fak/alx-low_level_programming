#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
 *  main - Entry point
 * Description: check on the last digit of the assigned var
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n  % 10;
	if (m > 5)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d and is 0\n", n, m);
	}
	return (0);
}

