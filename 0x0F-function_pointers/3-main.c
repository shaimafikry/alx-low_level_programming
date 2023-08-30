#include "function_pointers.h"
/**
 * print_name -  function that prints a name
 * @name: string
 * @f: pointer to a func
 * 
 * Return: no return
 */
int main (int argc, **argv)
{
	int num1, num2, calc;
	char op = argv[2][1];

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3];

	if ( argc < 4  || strlen(argv[2]) > 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (op != '+' || (op != '-' || (op != '/' || op != '%')))
	{
		printf("Error\n");
		exit(99);
	}
	calc = get_op_func(argv[2][1])(num1, num2);
	printf("%d\n", calc);
	return (0);
}
