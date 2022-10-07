#include "monty.h"

/**
 * _pint - prints the value at the top of the stack
 * @stack: head pointer
 * @line_number: line counter
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
	return;
}
