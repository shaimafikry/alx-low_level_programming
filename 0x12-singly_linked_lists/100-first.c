#include "stdio.h"
/**
 * start -  func excutes before main
 * Return: void
*/
void start(void)__attribute__((constructor));

void start(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
