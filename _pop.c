#include "monty.h"

/**
 * _pop - removes the top element of the stack
 * @stack: head pointer
 * @line_number: counts line
 *
 * Return: Always 0.
 */

int _pint(stack_t **stack, unsigned int line_number)
{
	if(*stack == NULL)
	{
	printf("L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
	}
	*stack = temp->next;
	return (0);
}

