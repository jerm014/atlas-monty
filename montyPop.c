#include "monty.h"

/**
 * montyPop-    remove an item from the top of the stack
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
void montyPop(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	Q = Q;

	if (*stack)
		deleteNodeAtIndex(stack, 0);
	else
	{
		fprintf(stderr, ERR_POP, line);
		free_double_pointer(tokens);
		exit(EXIT_FAILURE);
	}
}
