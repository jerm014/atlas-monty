#include "monty.h"

/**
 * montyPint-   print the value from the top of the stack
 *
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @line:       the line number we are processing
 * @Q:          unused data
 *
 * Return:      nothing
 *
 */
void montyPint(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	Q = Q;

	if (*stack)
		printf("%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, ERR_PINT, line);
		free_double_pointer(tokens);
		exit(EXIT_FAILURE);
	}
}
