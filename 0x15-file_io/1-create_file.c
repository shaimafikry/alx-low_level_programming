#include "main.h"
/**
 * read_textfile - function creates a file
 * @filename: name of the file to read
 * @text_content: num of letters to read and print
 * Return: actual number of letters it could read and print, or 0 on failure
 */
int create_file(const char *filename, char *text_content)
 {
	FILE *f = fopen(filename, "w");
	
	if (f == NULL  || filename == NULL)
		return (-1);
	fprintf(f, "%s", text_content);
	chmod(filename, 0600);
	fclose(f);
	return (1);
 }
