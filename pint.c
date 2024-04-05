#include "monty.h"

/**
 * op_pint: prints value at top of stack, followed by new line
 * 
 * @stack: data type
 * @line_number: where we are on the stack
*/
	void op_pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL)
		return;
	{
		printf("%d\n", (*stack)->n);
	}	
}
