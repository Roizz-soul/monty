#include "monty.h"

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
	char *lines = NULL, **command = NULL;
	size_t len = 0;
	ssize_t nread;
	unsigned int line_number = 0;
	int b;
	stack_t *stack = NULL;

	if (argc < 2 || argc > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((nread = getline(&lines, &len, fp)) != -1)
	{
		line_number++;
		command = split_line(lines);
		if (command == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		b = _exec(stack, command, line_number);
		if (b == -4)
		{
			fprintf(stderr, "L%u: unknown instruction %s", line_number, *command);
			exit(EXIT_FAILURE);
		}
	}
	fclose(fp);
	free(command);
	free(lines);
	return (0);
}
