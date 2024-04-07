#include "monty.h"

/**
 * montyError-  add the top two items in the stack
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
void montyError(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	free_stack(*stack);
	fprintf(stderr, ERR_INSTRUCTION, line, tokens[0]);
	free_double_pointer(tokens);
	exit(EXIT_FAILURE);
}
