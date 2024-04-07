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
	int res = 0;
	char *filename = {"/atlas-monty/bytecode/003.m\0"};
	char *programName = {".\0"};

	argc = 2;
	argv = malloc(sizeof(char *));
	argv[0] = programName;
	argv[1] = filename;
	res = _main(argc, argv);
	return (res);
}