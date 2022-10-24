#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: a pointer to an integer that will be changed
 * Return: void
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');
}
