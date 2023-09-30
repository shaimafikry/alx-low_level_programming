#include "main.h"
/**
 * set_string -  function that sets the value of a pointer to a char.
 * @s: 2di ptr
 * @to: destination
 * Return: no return
 */
void set_string(char **s, char *to)
{
while(**s)
{
to = &*s;
s++;
to++;
}

}
