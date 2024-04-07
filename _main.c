#include "monty.h"

/**
 * _main -  main entry point for MONTY, called from main and from vscode/main
 *
 * @argc:   the count of arguments
 * @argv:   the arguments
 *
 * Return:  0 success
 */

int _main(int argc, char **argv)
{
	FILE *file;
	char **tokens = NULL;
	char line[4096];
	stack_t *stack = NULL;
	unsigned int lineNumber = 1;
	bool q = false;
	bool *Q;

	Q = q;

	if (argc != 2)
	{
		fprintf(stderr, ERR_ARG_COUNT);
		exit(EXIT_FAILURE);
	}

	/* file = fopen("/atlas-monty/bytecode/00.m", "r"); */
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, ERR_FILE, argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), file))
	{
		tokens = tokenize(line, " $\n");

		if (tokens[0])
			monty_function(tokens[0]) (&stack, tokens, lineNumber, Q);

		free_double_pointer(tokens);
		lineNumber++;
	}

	free_stack(stack);
	fclose(file);
	exit(EXIT_SUCCESS);
}
