#include "monty.h"

/**
 * addNodeAtEnd-     add a new node at the end of a stack_t
 *
 * @node:            the head of the linked list
 * @tokens:          the user tokens for this line (only used for free on err)
 * @n:               the n value of the new node
 *
 * Return:           nothing
 *
 */

void addNodeAtEnd(stack_t **node, char **tokens, int n)
{
	stack_t *new_node = NULL;
	stack_t *temp_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL || node == NULL)
	{
		free_stack(*node);
		free_double_pointer(tokens);
		fprintf(stderr, ERR_MALLOC);
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = new_node->prev = NULL;

	if (*node == NULL)
		*node = new_node;
	else
	{
		temp_node = *node;
		while (temp_node->next)
			temp_node = temp_node->next;

		new_node->prev = temp_node;
		temp_node->next = new_node;
	}
}
