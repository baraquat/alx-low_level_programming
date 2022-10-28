#include "main.h"
/**
 * print_number - print an integer
 * @n: the integer
 * Return: void
 */
void print_number(int n)
{
	int digit;

	digit = (n % 10 && n / 10);

	if (n < 0)
		digit = (digit * -1);
	print number(digit);
	_putchar(digit + '0');
}
