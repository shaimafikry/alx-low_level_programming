#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
* times_table - prints table f numbers
* Return: no value return
*/

void times_table(void)
{
	int n;
	int x;
	int *z;
	for (n = 0; n <= 9; n++)
		{
			for (x = 0; x <= 9; x++)
				{
					*z = n * x;
					write( 1,&z,4);
				}
		}
}

