#include "3-calc.h"
/**
 * main - entry point func to use a calculate
 * @argc: count of arg
 * @argv: arguments
 * Return: sucess if 0
*/
int main (int argc, char *argv[])
{
int num1, num2, res;
char op;

op = argv[2][0];
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (strlen(argv[2]) > 1)
{
printf("Error\n");
exit(99);
}
if ((op == '/' || op == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
res = get_op_func(argv[2])(num1, num2);
printf("%d\n", res);
return (0);	
}
