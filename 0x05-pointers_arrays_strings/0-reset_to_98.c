#include "main.h"

/**
 * reset_to_98 - updates the value of the variable
 * the pointer points to to 98
 * @n: pointer to the variable to update
 */
void reset_to_98(int *n)
{
	*n = 98;
}
________________

1

#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
