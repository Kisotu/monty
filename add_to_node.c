#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void add_to_node(stack_t **head, int n)
{

	stack_t *new_nd, *aux;

	aux = *head;
	new_nd = malloc(sizeof(stack_t));
	if (new_nd == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_nd;
	new_nd->n = n;
	new_nd->next = *head;
	new_nd->prev = NULL;
	*head = new_nd;
}
