#include "monty.h"

/**
 * op_pop - removes the top element of the stack
 *
 * @stack: data type
 * @line_number: where we are on the stack
 * @user_args: tokens from line
*/
void op_pop(stack_t **stack, unsigned int line_number, char **user_args)
{
	stack_t *temp_node = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	delete_node(stack);
	(void)user_args;
}
