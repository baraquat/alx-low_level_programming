#include "main.h"
#include <stdio.h>
/**
 * main - print the numbers from 1 - 100
 * multiples of 3, print 'fizz'
 * multiples of 5, print 'buzz'
 * both 3 and 5, print 'fizzbuzz'
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}

