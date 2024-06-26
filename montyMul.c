#include "monty.h"

/**
 * montyMul-    subtract the top item in the stack from the second item in the
 *              stack
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @line:       the line number we are processing
 * @Q:          unused data
 *
 * Return:      nothing
 *
 */
void montyMul(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	int a = 0;
	int b = 0;

	Q = Q;

	if (*stack && (*stack)->next)
	{
		a = deleteNodeAtIndex(stack, 1);
		b = deleteNodeAtIndex(stack, 0);
		addNode(stack, tokens, (a * b));
	}
	else
	{
		free_stack(*stack);
		fprintf(stderr, ERR_MUL, line);
		free_double_pointer(tokens);
		exit(EXIT_FAILURE);
	}
}
