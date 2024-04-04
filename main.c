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

	