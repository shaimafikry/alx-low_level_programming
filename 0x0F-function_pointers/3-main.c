#include "3-calc.h"
#include <string.h>
/**
 * print_name -  function that prints a name
 * @name: string
 * @f: pointer to a func
 * 
 * Return: no return
 */
int main (int argc, char **argv)
{
	int (*test)(int, int);
	int calc, num1, num2;
	char op = argv[2][1];

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	test = get_op_func(argv[2]);
	calc = test(num1, num2);
	printf("%d\n", calc);
	return (0);
}
