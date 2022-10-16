#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase
 * use only putchar
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	char k;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}
	putchar('\n');

	return (0);
}
