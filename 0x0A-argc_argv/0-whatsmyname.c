#include "main.h"
#inclue <stdio.h>
/**
 * main - entry point
 * @argc : number of argument 
 * @argv : array
 * Return : 0 always success
 */
int main (int argc, char *argv[])
{
	int i;
	int m;

	for ( i = 0; i < argc; i++)
	{
		for (m =0; argv[i][m] != '\0'; m++)

			_putchar(argv[i][m]);
	}
return (0);
}
