#include "monty.h"

/**
 * montyAdd-  add the top two items in the stack
 *
 * @stack:    pointer to the current stack
 * @n:        unused data
 *
 * Return:    nothing
 *
 */
void montyAdd(stack_t **stack, int n)
{
	// pop twice, add those two values, push new value.

	stack_t *new_node = NULL;

	n = n;

	if (stack == NULL)
		return (NULL);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = //add first two;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;
	else
		new_node->prev = NULL;

	// delete nodes 2 and 3 (0 based numbering)
	*stack = new_node;

}
