#include "main.h"
#include <stdio.h>
/**
 * _islower - check if c is a lowercase letter
 * @c: the character to be checked
 * Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
