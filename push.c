#include "monty.h"
int ext;
/**
 * pusher - stack a new element
 * @first: stack
 * @line_number: line number zero
 */

void pusher(stack_t **first, unsigned int line_number)
{
	stack_t *trip;
	(void)line_number;
	trip = malloc(sizeof(stack_t));
	if (trip == NULL)
	{
		printf("Error: malloc failed\n");
		free_list(first);
		free(first);
		exit(EXIT_FAILURE);
	}

	trip->n = num;
	trip->prev = NULL;
	if (*first != NULL)
	{
		(*first)->prev = trip;
		trip->next = *first;
	}
	else
		trip->next = NULL;
	*first = trip;
}
