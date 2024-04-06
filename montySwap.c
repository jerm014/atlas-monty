#include "monty.h"

/**
 * montySwap-   swap the top two items in the stack
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
void montySwap(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	int n = 0;

	if (*stack && (*stack)->next)
	{
		n = deleteNodeAtIndex(stack, 1);
		addNode(stack, tokens, n);
	}
	else
	{
		free_stack(stack);
		fprintf(stderr, ERR_SWAP, lineNumber);
		free_double_pointer(tokens);
		exit(EXIT_FAILURE);
	}
}
