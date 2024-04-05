#ifndef _MONTY_H_
#define _MONTY_H_

#include "stdio.h"
#include "stdlib.h"

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
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **, int);
} instruction_t;

/* Functions used in Monty: */

int deleteNodeAtIndex(stack_t **, unsigned int);
int free_double_pointer(char **);
void montyAdd(stack_t **, int);
void montyNop(stack_t **, int);
void montyPall(stack_t **, int);
void montyPint(stack_t **, int);
void montyPop(stack_t **, int);
void montyPush(stack_t **, int);
void montySwap(stack_t **, int);
void (*monty_function(char *))(stack_t **, int);
char **tokenize(char *, char *);

/* Error Messages */

#define ERR_ARG_COUNT "USAGE: monty file\n"
#define ERR_FILE "Error: Can't open file %s\n"
#define ERR_INSTRUCTION "L%d: unknown instruction %s\n"
#define ERR_MALLOC "Error: malloc failed\n"

#endif
