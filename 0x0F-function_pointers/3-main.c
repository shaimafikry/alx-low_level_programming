#include "3-calc.h"
/**
 * main - entry point func to use a calculate
 * @argc: count of arg
 * @argv: arguments
 * Return: sucess if 0
*/
int main (int argc, char *argv[])
{
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
}
