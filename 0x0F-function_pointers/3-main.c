#include "3-calc.h"
/**
 * main - entry point
 * @argc: count
 * @argv: strings
 * func to use a calculate
 * Return: sucess if 0
*/
int main(int argc, char *argv[])
{
	int num1, num2, res;
	char *op;

	op = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = (*get_op_func(op))(num1, num2);
	printf("%d\n", res);
	return (0);
}
