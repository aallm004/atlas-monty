#include "monty.h"

/**
 * get_op_func - function that selects the correct function
 *
 * @s: operator passed as argument to program
 *
 * Return: NULL
 */

int (*get_op(char *s))(int, int)
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

	while (ops[i].op)
	{
		if (*(ops[i].op) == s[0] && s[1] == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}