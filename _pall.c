#include "monty.h"

/**
 * _pall - prints the stack
 * @stack: head pointer
 *
 * Return: Always 0.
 */

int _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack, *new_node;
}
if (stack == NULL)
{
	return;
}
while (temp != NULL)
{
	printf("%d/n", temp->n);
	temp = temp->prev;
}

return (0);
