#include "monty.h"
/**
  * _exec - executes the commands
  * @head: stack to be used
  * @cmd_line: line to be executed
  * @line_number: number of line in the file
  *
  * Return: check code
  */
int _exec(stack_t *stack, char **cmd_line, unsigned int line_number)
{
	instruction_t instruct[] = INSTRUCTIONS;
	int i;

	for (i = 0; instruct[i].opcode; i++)
	{
		if (strcmp(instruct[i].opcode, cmd_line[0]) == 0)
		{
			instruct[i].f(&stack, line_number);
			return (0);
		}
	}
	/*for (i = 0; cmd_line[i]; i++)
	{
		for (j = 0; instruct[j].opcode; j++)
		{
			if (strcmp(cmd_line[i], instruct[j].opcode) == 0)
			{
				instruct[j].f(&stack, line_number);
				return (0);
			}
		}
	}*/

	fprintf(stderr, "L%u: unknown instruction %s", line_number, cmd_line[0]);
	exit(EXIT_FAILURE);
}
