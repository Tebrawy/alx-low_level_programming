#include "main.h"

/**
 * swap_int - Swaps int a with b
 * @a: integar to swap
 * @b: integar to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
