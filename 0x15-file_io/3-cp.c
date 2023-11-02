#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - program that copies the content of a file to another file.
 * @argc: count of inputs
 * @argv: file names
 * Usage: cp file_from file_to
 * Return: 0 in sucsses
 */

int main(int argc, char *argv[])
{
	char c[BUFFER_SIZE];
	/*int b_rd, b_wr;*/
	char *file1 = argv[1];
	char *file2 = argv[2];
	FILE *from = fopen(file1, "r");
	FILE *to = fopen(file2, "w");

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file1);
		exit(98);
	}
	if (to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	chmod(file2, 0664);

	while (fgets(c,BUFFER_SIZE,from) != NULL)
	{
		fprintf(to,"%s",c);
	}
	if (fclose(from) == 0 || fclose(to) == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd r\n");
		exit(100);
	}
	fclose(from);
	fclose(to);
	return (1);
}
