#include "monty.h"

/**
 * monty_function- get the operation function for an opcode
 *
 * @s:             the opcode
 *
 * Return:         the function for the opcode
 *
 */
void (*monty_function(char *s))(stack_t **, char **, unsigned int)
{
	instruction_t ops[] = {
		{"push", montyPush},
		{"pall", montyPall},
		{"pint", montyPint},
		{"pop", montyPop},
		{"swap", montySwap},
		{"add", montyAdd},
		{"nop", montyNop},
		{NULL, NULL}
	};
	int i = 0;

	while ((ops[i]).opcode)
	{
		if (strncmp(ops[i].opcode, s, strlen(s)) == 0)
			return (ops[i].f);
		if (ops[i + 1].f == NULL)
			return (montyError);
		i++;
	}
}
