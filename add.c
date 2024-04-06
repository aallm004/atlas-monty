#include "monty.h"

/**
 * op_add - adds the top two elements of the stack
 *
 * @stack: data type
 * @line_number: where we are on the stack
 * @user_args: tokens from line
*/

	void op_add(stack_t **stack, unsigned int line_number, char **user_args)

{
	if (*stack == NULL)
	/*return(void);*/

	(*stack)->n += (*stack)->n;
	op_pop(stack, line_number, user_args);
}
