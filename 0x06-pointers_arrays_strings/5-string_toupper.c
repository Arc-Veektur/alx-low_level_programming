#include "main.h"

/**
 * string_toupper - a function that changes
 * all lowercase letters of a string to uppercase
 * @n: illustrator
 * Return: n
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'n' && n[i] <= 'i')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

