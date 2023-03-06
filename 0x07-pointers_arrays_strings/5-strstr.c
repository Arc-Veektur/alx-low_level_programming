#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @needle: input
 * @haystack: iput
 * Return: 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
		i++;
		p++;
		}
		if (*p == '\0')
			return (haystack);
	}
		return (0);
}

