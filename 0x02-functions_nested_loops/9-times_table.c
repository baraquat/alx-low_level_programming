#include "main.h"
#include <stdio.h>
/**
 * times_table - print the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	k = i * j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j >= 0; j++)
		{
			k = i * j;
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
