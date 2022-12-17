#include "monty.h"

/**
 *
 *
 *
 *
 */

stack_t init_stack(void)
{
	stack_t *head;
	
	head = malloc(sizeof(stack_t));

	if (head == NULL)
		return (NULL);
	
	head->n = NULL;
	head->next = NULL;

	return (*head)
}

stack_t push(stack_t *head, const int n)
{
	stack_t *temp;
	stack_t *last;

	temp = malloc(sizeof(stack_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	
	if (*head == NULL)
		*head = temp;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		temp->prev = last;
		last->next = temp;
	}
	return (*head);
}
