#include "monty.h"

/**
 * op_push: pushes an element to the stack
 * 
 * @stack: data type
 * @line_number: where we are on the stack
*/

void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL;
	
	if (*stack == NULL)
		/*return(void);*/

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		/*return(void);*/

	new_node->n = line_number;
	new_node->next = *stack;
	new_node->prev = NULL;

	if((*stack) != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;

	/*return(void);*/
}
