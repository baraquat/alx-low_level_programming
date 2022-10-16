#include <stdio.h>
/**
 * main - print all single digit of base 10 starting from 0
 * use only putchar and not more than twice
 * Return: 0 if successful
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
