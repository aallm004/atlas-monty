#include "monty.h"

/**
 * op_pall - prints all the values on the stack, starting from top of stack
 * 
 * @stack: data type
 * @line_number: where we are on the stack
*/
void op_pall(stack_t **stack, unsigned int line_number)
{
	int count = 0;

	while (*stack)
	{
		printf("%d\n", (*stack)->n);
		count++;
		(*stack) = (*stack)->next;
	}
}
