#include "monty.h"

/**
 * addNode-           add a node at the top of a doubly linked list
 *
 * @stack:            the head of a dlistint_t linked list
 * @tokens:           the value to put in the node
 * @n:                the value of a node
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
		free_stack(*stack);
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
