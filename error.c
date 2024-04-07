#include "monty.h"

/**
 * Error - finds errors
 *
 * @stack: data type
 * @line_number: where we are on the stack
 * @user_args: tokens from line
*/
void Error(stack_t **stack, unsigned int line_number, char **user_args)
{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, user_args[0]);
			free_stack(*stack);
			free_string_array(user_args);
			exit(EXIT_FAILURE);
}
