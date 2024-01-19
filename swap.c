#include "monty.h"
/**
 * func_swap - swaps top two elements of stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void func_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(cmdx.input_file);
		free(cmdx.curr_line);
		free_dlist(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
