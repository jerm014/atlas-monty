#include "monty.h"

/**
 * montySub-    subtract the top item in the stack from the second item in the
 *              stack
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
void montySub(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	int sum = 0;

	if (*stack && (*stack)->next)
	{
		sum = deleteNodeAtIndex(stack, 1);
		sum -= deleteNodeAtIndex(stack, 0);
		addNode(stack, tokens, sum);
	}
	else
	{
		free_stack(*stack);
		fprintf(stderr, ERR_SUB, lineNumber);
		free_double_pointer(tokens);
		exit(EXIT_FAILURE);
	}
}
