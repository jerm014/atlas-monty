#include "monty.h"

/**
 * montyPush-   add an item to the stack
 *
 *
 * @stack:      pointer to the current stack
 * @tokens:     the value to add to the stack
 * @line:       the line number we are processing
 * @Q:          true for QUEUE mode, false for STACK mode
 *
 * Return:      nothing
 *
 */

void montyPush(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	if (tokens[1] && isNumeric(tokens[1]))
	{
		if (*Q)
			addNodeAtEnd(stack, tokens, atoi(tokens[1]));
		else
			addNode(stack, tokens, atoi(tokens[1]));
	}
	else
	{
		free_stack(*stack);
		free_double_pointer(tokens);
		fprintf(stderr, ERR_PUSH, line);
		exit(EXIT_FAILURE);
	}
}
