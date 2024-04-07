#include "monty.h"

/**
 * montyRotr-   The last element of the stack becomes the top element
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
void montyRotr(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	size_t len = 0;

	line = line;
	Q = Q;

	/* if there are not at least two nodes in the stack, don't bother. */
	if (*stack && (*stack)->next)
	{
		len = getStackLen(*stack);
		addNode(stack, tokens, deleteNodeAtIndex(stack, (len - 1)));
	}
}
