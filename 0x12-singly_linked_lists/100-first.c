#include "lists.h"
void function_before(void) __attribute__ ((constructor));
/**
 * function_before -  runs before main
 * @void: void
 */
void function_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
