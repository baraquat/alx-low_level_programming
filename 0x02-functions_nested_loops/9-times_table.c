#include "main.h"
#include <stdio.h>
/**
 * times_table - print the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar(0);
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
