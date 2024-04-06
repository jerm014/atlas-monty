#include "monty.h"

/**
 * montyPop-    remove an item from the top of the stack
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
void montyPop(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	tokens = tokens;
	lineNumber = lineNumber;

	if (*stack)
		deleteNodeAtIndex(stack, 0);
	else
	{
		fprintf(stderr, ERR_POP, lineNumber);
		free_double_pointer(tokens);
		exit(EXIT_FAILURE);
	}
}
