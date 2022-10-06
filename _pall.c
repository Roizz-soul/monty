#include "monty.h"

/**
 * _pall - prints all the values on the stack
 * @stack: head pointer
 * @line_number: line number
 * Return: check code
 */

int _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (stack == NULL)
		return (0);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}

	return (0);
}
