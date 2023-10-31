#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: name of the file to read
 * @letters: num of letters to read and print
 * Return: actual number of letters it could read and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f =  fopen(filename, "r");
	size_t i;
	char c = fgetc(f);

	i = 0;
	if (f == NULL)
		return (0);
	do {
		if (feof(f))
		{
			break;
		}
		printf("%c", c);
		i++;
	} while (i < letters);

	fclose(f);
	return (i);
}
