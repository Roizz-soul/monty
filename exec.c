#include "monty.h"
/**
  * _exec - executes the commands
  * @head: stack to be used
  * @cmd_line: line to be executed
  * @line_number: number of line in the file
  *
  * Return: check code
  */
int _exec(stack_t *head, char **cmd_line, unsigned int line_number)
{
	int i, j;

	if (cmd_line == NULL)
		return (-1);

	for (i = 0; cmd_line[i]; i++)
	{
		for (j = 0; instructions[j].opcode; j++)
		{
			if (strcmp(cmd_line[i], instructions[j].opcode) == 0)
			{
				instructions[j].f(head, line_number);
				return (0);
			}
		}
	}
}
