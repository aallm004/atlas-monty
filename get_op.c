#include "monty.h"

/**
 * get_op - function that selects the correct function
 *
 * @s: operator passed as argument to program
 *
 * Return: NULL
 */

void (*get_op(char *s))(stack_t **, unsigned int, char **)
{
	instruction_t ops[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].opcode)
	{
		if (strncmp(ops[i].opcode, s, strlen(s)) == 0)
			return (ops[i].f);
		if (ops[i + 1].f == NULL)
			return (Error);
		i++;
	}

	return (NULL);
}
