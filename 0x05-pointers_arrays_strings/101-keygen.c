#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generates random valid passwords for the program
 * Return: void
 */
int main(void)
{
	int j;

	srand(time(0));
	j = rand();
	printf("%i\n", j);
	return (0);
}
