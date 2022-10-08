#include "monty.h"

/**
 * _mul - multiplies the second top element of the stack
 * with the top element of the stack
 * @stack: pointer to lists for monty stack
 * @line_number: number of line opcode occurs on
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	int aux;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		free(var_global.buffer);
		fclose(var_global.file);
		exit(EXIT_FAILURE);
	}
	else
	{
		aux = (*stack)->n;
		_pop(stack, line_number);
		(*stack)->n *= aux;
	}
}
