#include "monty.h"

/**
 * op_nop - does litcherally nothing
 *
 * @stack: data type
 * @line_number: where we are on the stack
 * @user_args: tokens from line
*/
void op_nop(stack_t **stack, unsigned int line_number, char **user_args)
{
	(void)stack;
	(void)line_number;
	(void)user_args;
}
