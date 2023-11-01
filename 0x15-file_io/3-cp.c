#include "main.h"
/**
 * main - program that copies the content of a file to another file.
 * @argc: count of inputs
 * @argv: file names
 * Usage: cp file_from file_to
 * Return: 0 in sucsses
 */

int main(int argc, char *argv[])
{
	char c;
	char *file1 = argv[1];
	char *file2 = argv[2];
	FILE *from = fopen(file1, "r");
	FILE *to = fopen(file2, "w");

	/*if num of arg isnt correct ,exit 97 print useage :cp file_from file_to\n*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/**
	 * if file_from not exist, or can not read it,
	 * exit 98 print Error: Can't read from file NAME_OF_THE_FILE\n
	*/
	if (from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file1);
		exit(98);
	}
	/**
	 * if you can not create or if write to file_to fails,exit 99
	 * print Error: Can't write to NAME_OF_THE_FILE, followed by a new line
	*/
	if (to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	chmod(file2, 0664);
	c = fgetc(from);
	while (c != EOF)
	{
		fputc(c, to);
		c = fgetc(from);
	}
	if (fclose(from) == 0 || fclose(to) == 0) {
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	fclose(from);
	fclose(to);
	return (1);
}
