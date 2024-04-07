#include "monty.h"

/**
 * montyRotr-   The last element of the stack becomes the top element
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
void montyRotr(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	lineNumber = lineNumber;
	size_t len = 0;

	/* if there are not at least two nodes in the stack, don't bother. */
	if (*stack && (*stack)->next)
	{
		len = getStackLen(*stack);
		addNode(stack, tokens, deleteNodeAtIndex(stack, (len - 1)));
	}
}
