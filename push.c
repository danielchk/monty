#include "monty.h"
int ext;
/**
 * pusher - stack a new element
 * @first: stack
 * @line_number: line number zero
 */

void pusher(stack_t **first, unsigned int line_number)
{
	stack_t *top;
	(void)line_number;
	top = malloc(sizeof(stack_t));
	if (top == NULL)
	{
		printf("Error: malloc failed\n");
		free_list(first);
		free(first);
		exit(EXIT_FAILURE);
	}

	top->n = num;
	top->prev = NULL;
	if (*first != NULL)
	{
		(*first)->prev = top;
		top->next = *first;
	}
	else
		top->next = NULL;
	*first = top;
}
