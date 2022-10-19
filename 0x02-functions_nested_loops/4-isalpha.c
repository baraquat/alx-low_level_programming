#include "main.h"
#include <stdio.h>
/**
 * _isalpha - check for alphabetic character c
 * @c: alphabetic chater to be chacked
 * Return: 1 if successful, 0 otherwise
 */
int _isalpha(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
