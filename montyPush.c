#include "monty.h"

/**
 * montyPush- add an item to the stack
 *
 * @stack:    pointer to the current stack
 * @n:        the value to add to the stack
 *
 * Return:    nothing
 *
 */
void montyPush(stack_t **stack, int n)
{
	stack_t *new_node = NULL;

	if (stack == NULL)
		return (NULL);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;
	else
		new_node->prev = NULL;

	*stack = new_node;
}
