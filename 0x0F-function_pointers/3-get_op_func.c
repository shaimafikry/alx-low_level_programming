#include "calc.h"
/**
 * get_op_func -  function pointer selects the correct function to perform the operation asked by the user
 * @s: string
 * 
*/
int (*get_op_func(char *s))(int, int);
