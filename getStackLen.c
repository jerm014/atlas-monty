#include "monty.h"

/**
 * getStackLen-    find the length of the stack
 *
 * @h:             pointer to the head of the stack
 *
 * Return:         the number of nodes in the stack
 *
*/

size_t getStackLen(stack_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
