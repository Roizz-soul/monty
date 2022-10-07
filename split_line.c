#include "monty.h"
/**
  * split_line - splits a line into words / tokens
  * @line: line to be splitted
  * Return: tokens
  */
char **split_line(char *line)
{
	char **tokens = malloc(2 * sizeof(char *));
	/*char **cmd_line = malloc(2 * sizeof(char *));*/
	int length = 0;/*, i, j;*/
	char *delimiters = " \t\r\n";
	char *token = strtok(line, delimiters);
	/*instruction_t instruct[] = INSTRUCTIONS;
	extern char __attribute__((unused)) **global_command;*/

	if (tokens == NULL)
		return (NULL);

	while (token != NULL)
	{
		tokens[length] = token;
		length++;
		token = strtok(NULL, delimiters);
	}
	/*for (i = 0; tokens[i] != NULL; i++)
	{
		for (j = 0; instruct[j].opcode; j++)
		{
			if (strcmp(instruct[j].opcode, tokens[i]) == 0)
			{
				cmd_line[0] = tokens[i];
				if (strcmp(tokens[i], "push") == 0)
					cmd_line[1] = tokens[i + 1];
				else
					cmd_line[1] = NULL;
				global_command = cmd_line;
				free(tokens);
				printf("here %s\n", global_command[1]);
				return (cmd_line);
			}
		}
	}

	free(cmd_line);*/
	global_command = tokens;
	return (tokens);
}
