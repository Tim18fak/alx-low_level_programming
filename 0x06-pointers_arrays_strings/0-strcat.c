#include "main.h"
/**
 * _strcat - concantenates two string
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (des[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		des[i] = scr[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
