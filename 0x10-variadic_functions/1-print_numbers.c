#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers -  a function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: input
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned in index;


	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");

	va_end(nums);
}
