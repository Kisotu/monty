#include "monty.h"
/**
 * func_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: NULL
*/
void func_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(cmdx.input_file);
		free(cmdx.curr_line);
		free_dlist(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
