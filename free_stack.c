#include "monty.h"

/**
 * free_stack - function that frees a list
 *
 * @head: first node
 *
 */

void free_stack(stack_t *head)
{
	stack_t *temp_node;

	while (head)
	{
	temp_node = head;
	head = head->next;
	free(temp_node);
	}
}
