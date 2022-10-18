#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print a-x 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
	int times = 0;
	char ch = 'a';

	while (times < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		putchar('\n');

		times++;
	}
}
