#include "monty.h"

/**
 * _pint - prints the value at the top of the stack
 * @stack: head pointer 
 * @line_number: line counter
 *
 * Return: Always 0.
 */

int _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL) // if stack is empty
	{
		printf("L%u: can't pint, stack empty\n", line_number)
			exit(EXIT_FAILURE);
	}
	printf("%d/n",head->n);
	free(*stack);
}
