#include "monty.h"
/**
 * add_node - adds a node
 *
 * @stack: stack
 * @n: new_node
 * @user_args: double pointer
 *
 * Return: new node
 *
*/
void add_node(stack_t **stack, int n, char **user_args)
{
	stack_t *new_node = NULL;

	if (stack != NULL)
	{
		new_node = malloc(sizeof(stack_t));
		if (new_node == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			free_stack(*stack);
			free_string_array(user_args);
			exit(EXIT_FAILURE);
		}

		new_node->n = n;
		new_node->next = *stack;
		new_node->prev = NULL;

		if ((*stack) != NULL)
			(*stack)->prev = new_node;

		*stack = new_node;
	}
}
