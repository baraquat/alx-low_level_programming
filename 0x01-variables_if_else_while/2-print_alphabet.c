#include <stdio.h>
/**
 * main - print the alphabet in lower case follwed by a new line
 * only use putchar function
 * on,y use putchar twice in the code
 * Return: 0 if successful
 */
int main(void)
{
	char bar = 'a';

	while (bar <= 'z')
	{
		putchar(bar);
		bar++;
	}
	putchar('\n');
	return (0);
}
