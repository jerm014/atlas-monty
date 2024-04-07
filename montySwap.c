#include "monty.h"

/**
 * montySwap-   swap the top two items in the stack
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
void montySwap(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	int n = 0;

	Q = Q;

	if (*stack && (*stack)->next)
	{
		n = deleteNodeAtIndex(stack, 1);
		addNode(stack, tokens, n);
	}
	else
	{
		free_stack(*stack);
		fprintf(stderr, ERR_SWAP, line);
		free_double_pointer(tokens);
		exit(EXIT_FAILURE);
	}
}
