#include "monty.h"

/**
 * montyPint-   print the value from the top of the stack
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
void montyPint(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	tokens = tokens;
	lineNumber = lineNumber;

	if (*stack)
		printf("%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, ERR_PINT, lineNumber);
		free_double_pointer(tokens);
		exit(EXIT_FAILURE);
	}
}
