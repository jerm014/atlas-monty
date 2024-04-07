#include "monty.h"

/**
 * montyQueue-  switch to queue mode
 *
 * @stack:      unused data
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
extern bool G_STACK;

void montyQueue(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	stack = stack;
	tokens = tokens;
	lineNumber = lineNumber;

	G_STACK = false;
}
