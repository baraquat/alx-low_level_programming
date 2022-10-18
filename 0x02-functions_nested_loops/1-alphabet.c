#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print a-z
 * Return: 0 if successful
 */
void print_alphabet(void);
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

	return (0);
}
