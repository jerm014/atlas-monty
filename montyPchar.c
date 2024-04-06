#include "monty.h"

/**
 * montyPchar-  print the value from the top of the stack as ascii
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
void montyPchar(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	if (*stack)
	{
		if ((*stack)->n >= 0 && (*stack)->n <= 127)
			printf("%c\n", (*stack)->n);
		else
		{
			free_stack(*stack);
			fprintf(stderr, ERR_PCHAR_RANGE, lineNumber);
			free_double_pointer(tokens);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, ERR_PCHAR, lineNumber);
		free_double_pointer(tokens);
		exit(EXIT_FAILURE);
	}
}
