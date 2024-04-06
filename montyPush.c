#include "monty.h"

/**
 * montyPush-   add an item to the stack
 *
 * @stack:      pointer to the current stack
 * @tokens:     the value to add to the stack
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
void montyPush(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	lineNumber = lineNumber;
	if (tokens[1] && isNumeric(tokens[1]))
	{
		addNode(stack, tokens, atoi(tokens[1]));
	}
	else
	{
		free_stack(*stack);
		free_double_pointer(tokens);
		fprintf(stderr, ERR_PUSH, lineNumber);
		exit(EXIT_FAILURE);
	}
}
