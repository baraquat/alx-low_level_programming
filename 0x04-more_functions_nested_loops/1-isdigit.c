#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check for a digit
 * @c: the digit
 * Return: 1 if successful, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
