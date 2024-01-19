#include "monty.h"
/**
 * func_push - pushes an element to the stack
 * @head: stack hea
 * @counter: line_number
 * Return: no return
*/
void func_push(stack_t **head, unsigned int counter)
{
	int k, j = 0, flag = 0;

	if (cmdx.arg)
	{
		if (cmdx.arg[0] == '-')
			j++;
		for (; cmdx.arg[j] != '\0'; j++)
		{
			if (cmdx.arg[j] > 57 || cmdx.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(cmdx.input_file);
			free(cmdx.curr_line);
			free_dlist(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(cmdx.input_file);
		free(cmdx.curr_line);
		free_dlist(*head);
		exit(EXIT_FAILURE); }
	k = atoi(cmdx.arg);
	if (cmdx.lifo_flag == 0)
		add_to_node(head, k);
	else
		add_to_queue(head, k);
}
