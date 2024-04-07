#include "monty.h"
/**
 * delete_node - delete the top
 *
 * @stack: stack
 *
 * Return: value of the deleted node
*/
int delete_node(stack_t **stack)
{
		stack_t *temp_node = *stack;
		int n = 0;

		if ((*stack)->next)
			(*stack)->next->prev = NULL;
		temp_node = *stack;
		(*stack) = (*stack)->next;
		n = temp_node->n;
		free(temp_node);
		return (n);
}
