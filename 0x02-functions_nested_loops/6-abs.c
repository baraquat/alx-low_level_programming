#include "main.h"
#include <stdio.h>
/**
 * _abs - print the absolute value of an integer
 * Return: void
 * @n: absolute int
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
