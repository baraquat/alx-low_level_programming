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
	int n;

	srand(time(0));
	n = rand();
	printf("%i\d", n);
	return (0);
}
