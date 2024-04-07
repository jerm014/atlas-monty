#include "monty.h"

/**
 * montyAdd-    add the top two items in the stack
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
void montyAdd(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	int a, b;

	Q = Q;

	if (*stack && (*stack)->next)
	{
		a = deleteNodeAtIndex(stack, 0);
		b = deleteNodeAtIndex(stack, 0);
		addNode(stack, tokens, (a + b));
	}
	else
	{
		free_stack(*stack);
		fprintf(stderr, ERR_ADD, line);
		free_double_pointer(tokens);
		exit(EXIT_FAILURE);
	}
}
