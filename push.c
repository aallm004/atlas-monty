#include "monty.h"

/**
 * op_push - pushes an element to the stack
 *
 * @stack: data type
 * @user_args: tokens from line
 * @line_number: where we are on the stack
*/

void op_push(stack_t **stack, unsigned int line_number, char **user_args)
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*stack);
		free_string_array(user_args);
		exit(EXIT_FAILURE);
	}

	if (user_args[1] == NULL || !(isnumber(user_args[1])))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(new_node);
		free_string_array(user_args);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi(user_args[1]);
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;
	else
		new_node->prev = NULL;

	*stack = new_node;
}
