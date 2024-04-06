#include "monty.h"
/**
 * main - starting place for monty
 *
 * @argc: number of arguments (2)
 *
 * @argv: argument array
 *
 * Return: 0, 1
*/
int main(int argc, char **argv)
{
	FILE *file;
	size_t bufsize;
	char *buffer;
	char **user_args;
	stack_t **stack = NULL;
	unsigned int line_number = 1;
	int bytes;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		bytes = getline(&buffer, &bufsize, file) != 1;
		if (bytes == -1)
			break;

		user_args = tokenize(buffer, "$ \n");
		if (user_args == NULL)
			continue;

		get_op(user_args[0])((stack), line_number, user_args);

		free_string_array(user_args);
	}

	free(buffer);
	free_stack(*stack);
	fclose(file);
	return (0);
}
