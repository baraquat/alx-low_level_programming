#include <stdio.h>
/**
 * main - print lowercase alphabets in reverse
 * only use putchar
 * Return: 0 if successful
 */
int main(void)
{
	char rab = 'z';

	while (rab >= 'a')
	{
		putchar(rab);
		rab++;
	}
	putchar('\n');

	return (0);
}
