#include "main.h"
#include <stdio.h>
/**
 * main - print _putchar followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	char text[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
