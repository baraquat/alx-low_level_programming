#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print last digit of a number
 * @n: integer value
 * Return: integer
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (n < 0)
	{
		digit = digit * -1;
		_putchar(digit + '0');
	}
	return (digit);
}
