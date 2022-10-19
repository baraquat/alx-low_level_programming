#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the number it starts printing from
 * Return: 0
 */
void print_to_98(int n);
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	return (0);
}
