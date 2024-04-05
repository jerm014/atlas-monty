#include "monty.h"

/**
 * montySwap- swap the top two items in the stack
 *
 * @stack:    pointer to the current stack
 * @n:        unused data
 *
 * Return:    nothing
 *
 */
void montySwap(stack_t **stack, int n)
{
	n = deleteNodeAtIndex(stack, 1);
	montyPush(stack, n);
}
