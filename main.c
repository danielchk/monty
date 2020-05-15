#include "monty.h"
/**
 * main - readthe file and put it in stack_it
 * @argc: counter
 * @argv: files name
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
    }
	lkdlist(argv[1]);
	return (0);
}
