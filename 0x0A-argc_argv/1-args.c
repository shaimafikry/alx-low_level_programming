#include <stdio.h>
/**
 * main - entry , prints the number of arg passd to it
 * @argc: count of lines
 * @argv: string
 * Return: 0 success
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
