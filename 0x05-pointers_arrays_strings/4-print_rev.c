#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{

	int lonhi = 0;
	int 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n')
}
