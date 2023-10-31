#include "main.h"
/**
 * append_text_to_file - function APPENDS TEXT TO a file
 * @filename: name of the file to read
 * @text_content: num of letters to read and print
 * Return: actual number of letters it could read and print, or 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *f = fopen(filename, "a+");

	if (f == NULL  || filename == NULL)
		return (-1);
	if (text_content != NULL)
		fprintf(f, "%s", text_content);
	chmod(filename, 0664);
	fclose(f);
	return (1);
}
