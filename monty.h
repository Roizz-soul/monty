#ifndef MONTY_H
#define MONTY_H

#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#define INSTRUCTIONS \
{\
	{"push", _push},\
	{"pall", _pall},\
	{"pint", _pint},\
	{"pop", _pop},\
}

/**
  * struct stack_s - doubly linked list representation of a stack (or queue)
  * @n: integer
  * @prev: points to the previous element of the stack (or queue)
  * @next: points to the next element of the stack (or queue)
  *
  * Description: doubly linked list node structure
  * for stack, queues, LIFO, FIFO
  */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char **global_command;
void _pint(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
char **split_line(char *line);
int _exec(stack_t *head, char **cmd_line, unsigned int line_number);
stack_t *head;

#endif /* MONTY_H */
