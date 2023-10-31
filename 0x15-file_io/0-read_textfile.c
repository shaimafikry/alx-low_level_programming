#include "main.h"
/**
 * 
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f =  fopen(filename, "r");
	size_t i;

	i = 0;
	if (f == NULL)
		return (0);
	do
	{
		char c = fgetc(f);
		if (feof(f))
		{
			break;
		}
		printf("%c",c);
		i++;
	} while (i < letters);

	fclose(f);
	return (i);
}
