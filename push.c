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
	if (stack)
		new_node->next = *stack;
	else
		new_node->next = NULL;
	new_node->prev = NULL;

	if ((*stack) != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;

	/*return(void);*/
}
