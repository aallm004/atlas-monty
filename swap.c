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
	int temp_node;

	if (*stack == NULL)
	/*return(void);*/

	if ((*stack)->next == NULL)
	{
	temp_node = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp_node;
	}
	(void)line_number;
	(void)user_args;
}
