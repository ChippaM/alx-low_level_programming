#include "main.h"

/*
*function that swaps the values of two integers.
*/

void swap_int(int *a, int *b)
{
	int update = *a;

	*a = *b;
	*b = update;
}
