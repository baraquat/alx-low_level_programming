#include <stdio.h>
/**
 * main - print all possible combination of 2 digits
 * the two digit must be different
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = (j + 1); i <= 9; i++)
		{
			putchar(j);
			putchar(i);
		}
		if (j != 8 || i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
