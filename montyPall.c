#include "monty.h"

/**
 * montyPall-  print the stack
 *
 * @stack:     pointer to the current stack
 * @tokens:    unused data
 * @lineNumber: the line number we are processing
 *
 * Return:     nothing
 *
 */
void montyPall(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	tokens = tokens;
	lineNumber = lineNumber;

	while (*stack)
	{
		printf("%d\n", (*stack)->n);
		(*stack) = (*stack)->next;
	}

}
