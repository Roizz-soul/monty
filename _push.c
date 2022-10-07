#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @stack: head pointer
 * @line_number: not used
 */

void _push(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *new_node;
	/*int i;*/

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	/*for (i = 0; global_command[1][i]; i++)
	{
		if (global_command[1][i] < 48 && global_command[1][i] > 57)
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}*/
	new_node->n = atoi(global_command[1]);
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!((*stack)->n))
	{
		(*stack) = new_node;
		printf("%d\n", atoi(global_command[1]));
		return;
	}
	if (*stack != NULL)
	{
		(*stack)->next = new_node;
		new_node->prev = (*stack);
		*stack = new_node;
		printf("%d\n", atoi(global_command[1]));
	}

	return;
}
