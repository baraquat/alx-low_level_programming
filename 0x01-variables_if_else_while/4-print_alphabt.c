#include <stdio.h>
/**
 * main - print lowercase alphabets except q and e
 * Return: 0 if successful
 */
int main(void)
{
	char bar = 'a';

	while (bar <= 'z')
	{
		if ((bar != 'q') && (bar != 'e'))
		{
			putchar(bar);
		}
			bar++;
	}
		putchar('\n');

		return (0);
}
