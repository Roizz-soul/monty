#include "monty.h"
/**
  * split_line - splits a line into words / tokens
  * @line: line to be splitted
  * Return: tokens
  */
char **split_line(char *line)
{
	char **tokens = malloc(100 * sizeof(char *));
	char **cmd_line = malloc(2 * sizeof(char *));
	int length = 0, i, j;
	char *delimiters = " \t\r\n";
	char *token = strtok(line, delimiters);

	while (token != NULL)
	{
		tokens[lenth] = token;
		length++;
		token = strtok(NULL, delimiters);
	}
	tokens[length] = NULL;
	for (i = 0; tokens[i]; i++)
	{
		for (j = 0; instructions[j].opcode; j++)
		{
			if (strcmp(tokens[i], instructions[j].opcode) == 0)
			{
				cmd_line[0] = tokens[i];
				cmd_line[1] = tokens[i + 1];
				free(tokens);
				return (cmd_line);
			}
		}
	}
	free(tokens);
	return (NULL);
}
