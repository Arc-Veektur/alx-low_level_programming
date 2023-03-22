#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 *  the operation asked by the user
 *  @s: the operator passed as argument to the program
 *  Return:  a pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"x", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
}
