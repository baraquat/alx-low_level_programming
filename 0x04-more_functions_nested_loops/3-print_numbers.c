#include "main.h"
#include <stdio.h>
/**
 * print_numbers - from 0 to 9 follwed by a new line
 * Return: 0 if successful
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar (i + '0');
	}
	_putchar ('\n');
}