#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: a pointer to an int that will be updated
 * Return: void
 */
int _strlen(char *s)
{
	int k;

	k = 0;
        while (s[k] != '\0')
	{
		k++;
	}
		return (k);
}
