#include "monty.h"

/**
 * main -   main entry point for MONTY
 *
 * @argc:   the count of arguments
 * @argv:   the arguments
 *
 * Returns: 0 success
 */
int main(int argc, char **argv)
{
	FILE *file;
	char **tokens = NULL;
	char line[4096];
	stack_t *stack = NULL;
	unsigned int lineNumber;

	if (argc != 2)
	{
		fprintf(stderr, ERR_ARG_COUNT);
		exit(EXIT_FAILURE);
	}

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
			monty_function(tokens[0])(&stack, tokens, lineNumber);

		free_double_pointer(tokens);
		lineNumber++;
	}

	free_double_pointer(*stack);
	fclose(file);
	exit(EXIT_SUCCESS);
}
