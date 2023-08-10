#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * generate valid password
 * Return: 0 Always success
 */

int main (void)
{
	int password = 0;

	srand(time(0));
	password = rand();
	return (0);
}
