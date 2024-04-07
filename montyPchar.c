#include "monty.h"

/**
 * montyPchar-  print the value from the top of the stack as ascii
 *
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @line:       the line number we are processing
 * @Q:          unused data
 *
 * Return:      nothing
 *
 */
void montyPchar(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	Q = Q;

	if (*stack)
	{
		if ((*stack)->n >= 0 && (*stack)->n <= 127)
			printf("%c\n", (*stack)->n);
		else
		{
			free_stack(*stack);
			fprintf(stderr, ERR_PCHAR_RANGE, line);
			free_double_pointer(tokens);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, ERR_PCHAR, line);
		free_double_pointer(tokens);
		exit(EXIT_FAILURE);
	}
}
