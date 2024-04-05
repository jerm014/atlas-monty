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
	int fd;
	char **tokens = NULL;

	if (argc != 2)
	{
		fprintf(stderr, ERR_ARG_COUNT);
		exit(EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, ERR_FILE, argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&buffer, &size, fd) != -1)
	{
		tokens = tokenize(buffer, " \n");

		if (tokens[0])
			monty_function(tokens[0])(stack, tokens[1]);

		free_double_pointer(tokens);
	}
}
