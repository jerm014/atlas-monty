#include "monty.h"

/**
 * montyAdd-    add the top two items in the stack
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
void montyAdd(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	int sum = 0;

	lineNumber = lineNumber;

	sum += deleteNodeAtIndex(stack, 0);
	sum += deleteNodeAtIndex(stack, 0);
	addNode(stack, tokens, sum);
}
