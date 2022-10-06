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
		printf("L%u: can't pint, stack empty\n", line_number);
		return (-1);
	}
<<<<<<< HEAD
	printf("%d/n",head->n);
=======
	printf("%d\n",head->n);
	return (0);
>>>>>>> a9164628686b260f74073b71ce66a9083aab0b63
}
