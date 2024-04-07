#include "monty.h"

/**
 * montyPstr-   prints the string starting at the top of the stack, followed by
 *              a new line
 *
 * @stack:      pointer to the current stack
 * @tokens:     unused data
 * @line:       the line number we are processing
 * @Q:          unused data
 *
 * Return:      nothing
 *
 */
void montyPstr(stack_t **stack, char **tokens, unsigned int line, bool *Q)
{
	stack_t *temp_node;

	tokens = tokens;
	line = line;
	Q = Q;
	temp_node = *stack;

	if (temp_node)
	{
		while (temp_node)
		{
			if ((temp_node->n >= 0) && (temp_node->n <= 127))
			{
				printf("%c", temp_node->n);
				temp_node = temp_node->next;
				if (!temp_node)
					break;
			}
			else
				break;
			if (temp_node->n == 0)
				break;
		}
	}
	printf("\n");
}
