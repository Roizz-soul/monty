#include "monty.h"

/**
 * _pop - removes the top element of the stack
 * @stack: head pointer
 * @line_number: counts line
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = temp->prev;
	free(temp);
	return;
}

