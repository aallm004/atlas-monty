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

	if(*stack && (*stack)->next)
	{
	i = delete_node(stack);
	x = delete_node(stack);

	add_node(stack, (x + i), user_args);
	}
	else
	{
		free(*stack);
		free_string_array(user_args);
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

}
