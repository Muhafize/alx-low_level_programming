#include "main.h"
/**
 * char *_strcpy - a function that prints n elements of an array
 * @dest: array name
 * @src: is the numbar of elements of the array to be printed
 * Return: a and n inputsi
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
