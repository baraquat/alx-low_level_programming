#include <stdio.h>
/**
 * main - print all possible combination of 3 digits
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		for (j = (k + 1); j <= '9'; j++)
		{
			for (i = (j + 1); i <= '9'; i++)
			{
				putchar(k);
				putchar(j);
				putchar(i);
				{
					if (k != '7' || j != '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
