#include <stdio.h>
/*
 * main - string
 * print - string
 * print - print a string
 * @t:string
 * @s: string
 * Return:void
 */
void print(char *t);

int main(void)
{
	  char s[10];

	gets(s);
	print(s);
	return (0);
}
void print(char *t)
{
	if (*t == '\0')
	{
	return;
	puts("%c", *t);
	puts(++t);
}




