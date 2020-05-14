#include "monty.h"
int ext;
/**
 * pusher - stack a new element
 * @stack: line
 * @line_number: line number zero
 */

void pusher(stack_t **stack, unsigned int line_number)
{
	stack_t *trip;
	(void)line_number;
	trip = malloc(sizeof(stack_t));
	if (trip == NULL)
	{
		printf("Error: malloc failed\n");
		free_list(stack);
		free(stack);
		exit(EXIT_FAILURE);
	}

	trip->n = num;
	trip->prev = NULL;
	if (*stack != NULL)
	{
		(*stack)->prev = trip;
		trip->next = *stack;
	}
	else
		trip->next = NULL;
	*stack = trip;
}

/**
 * paller - print in order from last pushed.
 * @stack: stack
 * @line_number: line number zero
 */

void paller(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	UNUSED(line_number);

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
