#include "monty.h"

/**
 * addNode-           add a node at the top of a doubly linked list
 *
 * @node:             the head of a dlistint_t linked list
 * @n:                the value to put in the node
 *
 * Return:            nothing
 *
*/

void addNode(stack_t **stack, char **tokens, int n)
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		free_double_pointer(stack);
		free_double_pointer(tokens);
		fprintf(stderr, ERR_MALLOC);
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;
	else
		new_node->prev = NULL;

	*stack = new_node;
}
