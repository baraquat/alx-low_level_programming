#include "main.h"
/**
 * print_numbers - from 0 to 9 follwed by a new line
 * Return: void
 */
void print_numbers(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
