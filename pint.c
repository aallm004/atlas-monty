#include "monty.h"

/**
 * op_pint - prints value at top of stack, followed by new line
 *
 * @stack: data type
 * @line_number: where we are on the stack
 * @user_args: tokens from line
*/
	void op_pint(stack_t **stack, unsigned int line_number, char **user_args)
{
	if (*stack)
		printf("%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%d: unable to pint, stack empty\n", line_number);
		free_string_array(user_args);
		exit(EXIT_FAILURE);
	}
	(void)user_args;
}
