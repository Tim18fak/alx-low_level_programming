#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: Always 0.
 */
int main(void)

{
	int = nb;
	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("d\n", nb);
	nb = _atoi("		------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("	+	+	-	_98 Battery Street; San Franciso, CA 94111 - USA		");
	printf("%d\n", nb);
	nb = _atoi("---+++ -++ Suite -	402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}
