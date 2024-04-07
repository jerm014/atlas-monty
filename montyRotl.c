#include "monty.h"

/**
 * montyRotl-   The top element of the stack becomes the last one, and the
 *              second top element of the stack becomes the first one
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @line:       the line number we are processing
 * @Q:          unused data
 *
 * Return:      nothing
 *
 */
void montyRotl(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	line = line;
	Q = Q;

	/* if there are not at least two nodes in the stack, don't bother. */
	if (*stack && (*stack)->next)
	{
		addNodeAtEnd(stack, tokens, deleteNodeAtIndex(stack, 0));
	}
}
