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
	int sum = 0;

	sum += deleteNodeAtIndex(stack, 0);
	sum += deleteNodeAtIndex(stack, 0);
	montyPush(stack, sum);
}
