#include "monty.h"

/**
 * _pall - prints all the values on the stack
 * @stack: head pointer
 * @line_number: line number
 */

void _pall(stack_t **stack, __attribute__ ((unused)) unsigned int line_number)
{
	stack_t *temp = *stack;

	if (stack == NULL)
	{
		perror("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return;
}
