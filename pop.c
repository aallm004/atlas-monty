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

	if (stack == NULL)
	{
		fprintf(stderr, "%d: can't pop empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

		*stack = (*stack)->next;
		if (*stack != NULL)
			(*stack)->prev = NULL;
		free(temp_node);

		(void)user_args;
}
