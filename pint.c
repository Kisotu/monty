#include "monty.h"
/**
 * func_pint - prints value at top of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void func_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(cmdx.input_file);
		free(cmdx.curr_line);
		free_dlist(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
