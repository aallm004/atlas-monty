#include "monty.h"

/**
 * op_add - adds the top two elements of the stack
 *
 * @stack: data type
 * @line_number: where we are on the stack
 * @user_args: tokens from line
*/

void op_add(stack_t **stack, unsigned int line_number, char **user_args)
{
	int x, i;

	i = delete_node(stack);
	x = delete_node(stack);

	add_node(stack, x + i, user_args);

	line_number = line_number;
}
