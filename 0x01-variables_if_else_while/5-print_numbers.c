#include <stdio.h>
/**
 * main - print single digits from 0 to 9
 * Return: 0 if successful
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
