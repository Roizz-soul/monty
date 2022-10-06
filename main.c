#include "main.h"

/**
 * main - Entry point
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	FILE *fp;
	char **array_of_lines, *lines = NULL, **command = NULL;
	size_t len = 0;
	unsigned int i = 0, line_number = 0, b;
	stack_t *head = NULL;

	if (argc < 2 || argc > 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (fp == NULL)
	{
		perror("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	while (getline(&lines, &len, fp) != -1)
	{
		line_number++;
		command = split_line(lines);
		b = _exec(head, command, line_number);
		if (b == -1)
		{
			perror("L%u: unknown instruction %s\n", line_number, command);
			exit(EXIT_FAILURE);
		}
		if (b == -2)
		{
			perror("Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
	}
}
