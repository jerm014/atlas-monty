#include "monty.h"

/**
 * montyError-  add the top two items in the stack
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
void montyError(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	free_stack(*stack);
	fprintf(stderr, ERR_INSTRUCTION, lineNumber, tokens[0]);
	free_double_pointer(tokens);
	exit(EXIT_FAILURE);
}
