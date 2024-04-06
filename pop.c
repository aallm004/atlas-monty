#include "monty.h"

/**
 * op_pop: removes the top element of the stack
 * 
 * @stack: data type
 * @line_number: where we are on the stack
*/
void op_pop(stack_t **stack, unsigned int line_number)
{
	unsigned int pos = 0;
	stack_t *temp_node = *stack;

	if (stack == NULL)
		/*return;*/

	if (line_number == 0)
	{
		*stack = (*stack)->next;
		if(*stack != NULL)
			(*stack)->prev = NULL;
		free(temp_node);
		/*return;*/
	}

	while ((pos != line_number) && (temp_node != NULL))
	{
		temp_node = (temp_node->next);
		pos++;
	}
		if (pos == line_number)
		{
			if (temp_node->prev != NULL)
				temp_node->prev->next = temp_node->next;
			if (temp_node->next != NULL)
				temp_node->next->prev = temp_node->prev;
			free(temp_node);
			/*return(void);*/
		}
}
