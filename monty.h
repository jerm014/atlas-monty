#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 *
 * @n:              integer
 * @prev:           points to the previous element of the stack (or queue)
 * @next:           points to the next element of the stack (or queue)
 *
 * Description:     doubly linked list node structure for stack, queues, LIFO, 
 *                  FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 *
 * @opcode:               the opcode
 * @f:                    function to handle the opcode
 *
 * Description:           opcode and its function for stack, queues, LIFO, FIFO
 *                        (stack_t **stack, char **tokens)
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **, char **, unsigned int);
} instruction_t;

/* Functions used in Monty: */

void addNode(stack_t **stack, char **tokens, int n);
int deleteNodeAtIndex(stack_t **, unsigned int);
int free_double_pointer(char **);
void free_stack(stack_t *);

void (*monty_function(char *))(stack_t **, char **, unsigned int);
void montyAdd(stack_t **, char **, unsigned int);
void montyError(stack_t **, char **, unsigned int);
void montyNop(stack_t **, char **, unsigned int);
void montyPall(stack_t **, char **, unsigned int);
void montyPint(stack_t **, char **, unsigned int);
void montyPop(stack_t **, char **, unsigned int);
void montyPush(stack_t **, char **, unsigned int);
void montySwap(stack_t **, char **, unsigned int);

char **tokenize(char *, char *);

/* Error Messages */

#define ERR_ARG_COUNT		"USAGE: monty file\n"
#define ERR_FILE			"Error: Can't open file %s\n"
#define ERR_INSTRUCTION		"L%d: unknown instruction %s\n"
#define ERR_PUSH			"L%d: usage: push integer\n"
#define ERR_MALLOC			"Error: malloc failed\n"

#endif
