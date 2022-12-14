/**
 * putchar - writes the character c to stdout
 * @c: The character to print
 *
 * REturn: on success 1.
 * On error,  -1 is returned, and erno is set appropiately.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
