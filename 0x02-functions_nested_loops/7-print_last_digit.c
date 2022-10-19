#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print last digit of a number
 * @n: integer value
 * Return: integer
 */
int print_last_digit(int n)
{
	int n, digit;

	digit = n % 10;
	{
		_putchar(digit);
	}
	_putchar('\n');

	return (digit);
}
