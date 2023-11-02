#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - program that copies the content of a file to another file.
 * @argc: count of inputs
 * @argv: file names
 * Return: 0 in sucsses
 */
int main(int argc, char *argv[])
{
	char c[BUFFER_SIZE];
	int b_rd, b_wr;
	char *file1 = argv[1], *file2 = argv[2];
	int from = open(file1, O_RDONLY), to = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (argc != 3 || (file1 == NULL || file2 == NULL))
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file1);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	while ((b_rd = read(from, c, BUFFER_SIZE)) > 0)
	{
		b_wr = write(to, c, b_rd);
		if (b_wr != b_rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			exit(99);
		}
	}
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
