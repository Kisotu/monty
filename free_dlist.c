#include "monty.h"
/**
* free_dlist - frees a doubly linked list
* @head: head of the stack
*/
void free_dlist(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
