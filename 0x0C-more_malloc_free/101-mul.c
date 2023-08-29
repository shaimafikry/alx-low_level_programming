#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry
 * multiple two numbers
 * Return: return 0 success
 */
int main (int argc, char *argv)
{
	
	unsigned  int mul = 0;

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%u",mul);
	
	return (0);
}
