#include <stdio.h>
/**
 * main - print alphabets in lowercase and uppercase than a new line
 * only use putchar function
 * Return: 0 if successful
 */
int main(void)
{
	char bar = 'a';
	char BAR = 'A';

	while (bar <= 'z') /*print lowercase*/
	{
		putchar(bar);
		bar++;
	}

	while (BAR <= 'Z') /* print uppercase */
	{
		putchar(BAR);
		BAR++;
	}
	putchar('\n);

	return (0);
}

