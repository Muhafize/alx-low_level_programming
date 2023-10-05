#include "main.h"
/**
 * _puts - print a string, followed by a new line, to stdout
 * @str: string to print 
 */
void _put(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
