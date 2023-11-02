#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (b = a; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
