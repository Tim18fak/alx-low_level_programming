#include "main.h"

/**
 * _puts_recursion - print a string
 * @s:string
 * Return:vo
 */
void _puts_recursion(char *s)
{
	putchar(*s)
	puts_recursion(s + 1);
}
