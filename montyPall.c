#include "monty.h"

/**
 * montyPall-   print the stack
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
void montyPall(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	tokens = tokens;
	line = line;
	Q = Q;

	if (*stack)
	{
		while (1)
		{

			printf("%d\n", (*stack)->n);
			if ((*stack)->next)
				(*stack) = (*stack)->next;
			else
				break;
		}
		while (1)
		{
			if ((*stack)->prev)
				(*stack) = (*stack)->prev;
			else
				break;
		}
	}
}
