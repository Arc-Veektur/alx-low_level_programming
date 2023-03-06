#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: input
 * @c: input
 * REturn: 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[1] >= '\0'; i++)
	{
		if (s[1] == c)
			return (&s[i]);
	}
	return (0);
}
