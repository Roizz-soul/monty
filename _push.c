#include "monty.h"

stack_t *add_node(stack_t **stack, const int n);
/**
 * _push - pushes an element to the stack
 * @stack: head pointer
 * @line_number: not used
 */
void _push(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *temp = *stack, *new_node = malloc(sizeof(stack_t));

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
	if (*stack == NULL)
		head = new_node;
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
		head = new_node;
	}
}
