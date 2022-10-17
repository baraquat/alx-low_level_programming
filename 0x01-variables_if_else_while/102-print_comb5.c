#include <stdio.h>
/**
 * main - print all combintion of 2 digit num from 0 to 99
 * Return: 0 if successful
 i*
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = (i + 1); j <= 99; j++)
		{
			putchar(i / 10);
			putchar(i % 10);
			putchar(' ');
			putchar(j / 10);
			putchar(j % 10);

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
