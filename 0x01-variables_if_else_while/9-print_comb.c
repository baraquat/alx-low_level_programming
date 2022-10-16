#include <stdio.h>
/**
 * main - print all possible combination of single digit number
 * only use putchar 4ce
 * number must be seperated by a comma follwed by a space
 * number must be in ascending order
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
