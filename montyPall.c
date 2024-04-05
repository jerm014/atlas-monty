#include "monty.h"

/**
 * montyPall- print the stack
 *
 * @stack:    pointer to the current stack
 * @n:        unused data
 *
 * Return:    nothing
 *
 */
void montyPall(stack_t **stack, int n)
{
	n = n;

	while (*stack)
	{
		printf("%d\n", (*stack)->n);
		(*stack) = (*stack)->next;
	}

}
