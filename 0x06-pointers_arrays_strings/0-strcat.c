#include "main.h"
/**
 * _strcat - concatenate strings using pointer
 * @dest: a pointer to the character that will be changed
 * @src: a pointer that will be copied
 * Return: value of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		j = 0;

		while (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	dest[i] != '\0';
	return (dest);
}
