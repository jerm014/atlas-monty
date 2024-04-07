#include "monty.h"

/**
 * montyPstr-   prints the string starting at the top of the stack, followed by
 *              a new line
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */
void montyPstr(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	stack_t *temp_node;

	tokens = tokens;
	lineNumber = lineNumber;
	temp_node = *stack;

	if (temp_node)
	{
		while (temp_node)
		{
			if ((temp_node->n >= 0) && (temp_node->n <= 127))
			{
				printf("%c", temp_node->n);
				temp_node = temp_node->next;
			}
			else
				break;
			if (temp_node->n == 0)
				break;
		}
	}
	printf("\n");
}
