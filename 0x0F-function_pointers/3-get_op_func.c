#include "3-calc.h"
/**
 * get_op_func -  function that select which opr to deal with
 * @s: string
 * 
 * Return: null when no op found 
 * Return: no return
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =
	{
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
    int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[1].f);
		i++;
	}
	return (NULL);
}
