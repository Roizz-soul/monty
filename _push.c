#include "monty.h"

/**
 * _pall - pushes an element to the stack
 * @stack: head pointer
 * @line_number: not used 
 *
 * Return: Check code.
 */

int _push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack, *new_node;
	
	new_node = (stack_t *)malloc(sizeof(stack_t));
	if(new_node = NULL)
	{
		return (-2);
	}
	
	new_node->n =; // address later
	new_node->next = NULL;
	new_node->prev = NULL;

	if(temp = NULL)
	{
		*stack = new_node;
		return (0);
	}
	if(temp != NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
		*stack = new_node;
		return (0);
	}
}
