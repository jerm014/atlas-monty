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
	void (*f)(stack_t **stack, int n);
} instruction_t;

/* Functions used in Monty: */

void montyAdd(stack_t **stack, int n);
void montyNop(stack_t **stack, int n);
void montyPall(stack_t **stack, int n);
void montyPint(stack_t **stack, int n);
void montyPop(stack_t **stack, int n);
void montyPush(stack_t **stack, int n);
void montySwap(stack_t **stack, int n);
void (*monty_function(char *s))(stack_t **, int);

#endif
