#include "monty.h"

/**
 * op_swap - swaps the top two elements of the stack
 *
 * @stack: data type
 * @line_number: where we are on the stack
 * @user_args: tokens from line
*/
void op_swap(stack_t **stack, unsigned int line_number, char **user_args)
{
	int temp;

	if(*stack && (*stack)->next)
	{
		temp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
	else
	{
		free(*stack);
		free_string_array(user_args);
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
