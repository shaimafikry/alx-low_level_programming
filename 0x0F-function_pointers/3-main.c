#include "3-calc.h"
/**
<<<<<<< HEAD
 * main - entry point
 * @argc: count
 * @argv: strings
 * func to use a calculate
=======
 * main - entry point func to use a calculate
 * @argc: count of arg
 * @argv: arguments
>>>>>>> c2aaad42b7a7eee9d2838820fb22f56ede83822a
 * Return: sucess if 0
*/
int main(int argc, char *argv[])
{
<<<<<<< HEAD
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
=======
int num1, num2;
char *op;

op = argv[2];
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((op[0] == '/' || op[0] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(num1, num2));
return (0);	
>>>>>>> c2aaad42b7a7eee9d2838820fb22f56ede83822a
}
