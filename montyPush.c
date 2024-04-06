#include "monty.h"

/**
 * montyPush-  add an item to the stack
 *
 * @stack:     pointer to the current stack
 * @tokens:    the value to add to the stack
 * @lineNumber: the line number we are processing
 *
 * Return:     nothing
 *
 */
void montyPush(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	lineNumber = lineNumber;
	addNode(stack, tokens, atoi(tokens[1]));
}
