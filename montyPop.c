#include "monty.h"

/**
 * montyPop-  remove an item from the top of the stack
 *
 * @stack:    pointer to the current stack
 * @n:        unused data
 *
 * Return:    nothing
 *
 */
void montyPop(stack_t **stack, int n)
{
	n = n;
	deleteNodeAtIndex(stack, 0);
}
