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

		n = temp_node->n;

		if (temp_node->prev != NULL)
			temp_node->prev->next = temp_node->next;
		if (temp_node->next != NULL)				
			temp_node->next->prev = temp_node->prev;
		free(temp_node);

		return (n);
}