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
		fprintf(stderr, "%d: can't pop empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
		if (temp_node->prev != NULL)
			temp_node->prev->next = temp_node->next;
		if (temp_node->next != NULL)				
			temp_node->next->prev = temp_node->prev;
		free(temp_node);


		(void)user_args;
}
