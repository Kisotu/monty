#include "monty.h"
/**
 * func_pop - removes top element of stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void func_pop(stack_t **head, unsigned int counter)
{
	stack_t *n;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(cmdx.input_file);
		free(cmdx.curr_line);
		free_dlist(*head);
		exit(EXIT_FAILURE);
	}
	n = *head;
	*head = n->next;
	free(n);
}
