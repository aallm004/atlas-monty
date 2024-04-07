#include "../add.c"
#include "../free_stack.c"
#include "../free_string_array.c"
#include "../get_op.c"
#include "../isnumber.c"
#include "../_main.c"
#include "../monty.h"
#include "../nop.c"
#include "../pall.c"
#include "../pint.c"
#include "../pop.c"
#include "../push.c"
#include "../swap.c"
#include "../tokenize.c"

int main(void)
{
	int argc;
	char **argv;

	argc = 2;
	argv = malloc(sizeof(char *));
	argv[0] = malloc(2);
	argv[0] = ".\0";
	argv[1] = malloc(28);
	argv[1] = "/atlas-monty/bytecode/003.m\0";
	return(_main(argc, argv));
}