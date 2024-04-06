#include "monty.h"

/**
 * free_stack- free all of the nodes from the stack
 *
 * @node:      the head node of a doubly-linked list
 *
 * Return:     nothing
 *
*/

void free_stack(stack_t *node)
{
	if (node)
	{
		if (node->next != NULL)
			free_stack(node->next);

		free(node);
	}
}
