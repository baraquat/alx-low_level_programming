#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: right int
 * @b: left int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
