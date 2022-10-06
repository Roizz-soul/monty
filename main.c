#include "main.h"

/**
 * main - Entry point 
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0
 */

int main (int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char **array_of_lines, *lines = NULL, **command = NULL;
	size_t len = 0;
	unsigned int i = 0, line_number = 1, b;
	stack_t *head = NULL;

	if (argc < 2 || argc > 2)
	{
		perror("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	if (fp == NULL)
	{
		perror("Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&lines, &len, fp) != -1)
	{
		array_of_lines[i] = lines;
		command = split_line(lines);
		b = _exec(head, command, line_number);
		if (b == -1)
		{
		}
		line_number++;
		i++;
	}
}
