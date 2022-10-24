#include "main.h"
/**
 *  _atoi - convert a string to an integer
 *  @s: string
 *  Return: void
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, li = 0, po = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			po *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}
	for (i = count - size; i < count; i++)
	{
		li = li + ((*(s + i) - 48) * m);
		m /= 10
	}
	return (li * po);
}
