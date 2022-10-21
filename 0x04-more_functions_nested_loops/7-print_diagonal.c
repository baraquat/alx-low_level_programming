#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: integer
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
