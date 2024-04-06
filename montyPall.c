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
