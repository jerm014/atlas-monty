#include "monty.h"

/**
 * main -   main entry point for MONTY
 *
 * @argc:   the count of arguments
 * @argv:   the arguments
 *
 * Return:  0 success
 */
bool G_STACK;

int main(int argc, char **argv)
{
	G_STACK = true;
	return (_main(argc, argv));
}

/**
 * montyPush-   add an item to the stack
 *
 * @stack:      pointer to the current stack
 * @tokens:     the value to add to the stack
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */

void montyPush(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	lineNumber = lineNumber;
	if (tokens[1] && isNumeric(tokens[1]))
	{
		if (G_STACK)
			addNode(stack, tokens, atoi(tokens[1]));
		else
			addNodeAtEnd(stack, tokens, atoi(tokens[1]));
	}
	else
	{
		free_stack(*stack);
		free_double_pointer(tokens);
		fprintf(stderr, ERR_PUSH, lineNumber);
		exit(EXIT_FAILURE);
	}
}

/**
 * montyStack-  switch to stack mode
 *
 * @stack:      unused data
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */

void montyStack(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	stack = stack;
	tokens = tokens;
	lineNumber = lineNumber;

	G_STACK = true;
}

/**
 * montyQueue-  switch to queue mode
 *
 * @stack:      unused data
 * @tokens:     unused data
 * @lineNumber: the line number we are processing
 *
 * Return:      nothing
 *
 */

void montyQueue(stack_t **stack, char **tokens, unsigned int lineNumber)
{
	stack = stack;
	tokens = tokens;
	lineNumber = lineNumber;

	G_STACK = false;
}
