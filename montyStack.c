#include "monty.h"

/**
 * montyStack-  switch to stack mode
 *
 * @stack:      unused data
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
extern bool G_STACK;

void montyStack(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	stack = stack;
	tokens = tokens;
	lineNumber = lineNumber;

	G_STACK = true;
}
