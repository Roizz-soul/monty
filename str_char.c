#include "monty.h"

/**
 * _pchar - prints the char at the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: the index of the current line
 *
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int val;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free(var_global.buffer);
		fclose(var_global.file);
		exit(EXIT_FAILURE);
	}

	val = (*stack)->n;
	if (val > 127 || val < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free(var_global.buffer);
		fclose(var_global.file);
		exit(EXIT_FAILURE);
	}

	putchar(val);
	putchar('\n');
}

/**
 * _pstr - prints the string starting at the top of the stack
 * @stack: pointer to lists for monty stack
 * @line_number: number of line opcode occurs on
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int c = 0;

	(void)line_number;


	while (tmp)
	{
		c = tmp->n;
		if (c == 0)
			break;
		putchar(c);
		tmp = tmp->next;
	}
	putchar('\n');
}
