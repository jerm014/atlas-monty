#include "monty.h"

/**
 * deleteNodeAtIndex- delete the node at index of a doubly linked list
 *
 * @node:             the head of a dlistint_t linked list
 * @index:            the node to remove
 *
 * Return:            the value of the node deleted
 *
*/

int deleteNodeAtIndex(stack_t **node, unsigned int index)
{
	unsigned int count = 0;
	stack_t *temp_node;
	int n = 0;

	if (!(*node))
		return (-1);

	temp_node = *node;

	if (index == 0)
	{
		(*node)->next->prev = NULL;
		temp_node = *node;
		(*node) = (*node)->next;
		n = temp_node->n;
		free(temp_node);
		return (n);
	}

	while ((count != index) && temp_node)
	{
		temp_node = temp_node->next;
		count++;
	}

	if (count == index)
	{
		temp_node->prev->next = temp_node->next;
		if (temp_node->next)
			temp_node->next->prev = temp_node->prev;
		n = temp_node->n;
		free(temp_node);

		return (n);
	}

	return (n);
}
