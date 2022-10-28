#include "main.h"
/**
 * reverse_array - print array in reverse
 * @a: an array of integers
 * @n: num of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int k;

	while (i < j)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		i++;
		j--;
	}
}
