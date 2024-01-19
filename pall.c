#include "monty.h"
/**
 * func_pall - prints elems of stack from top
 * @head: stack head
 * @counter: no used
 * Return: NULL
*/
void func_pall(stack_t **head, unsigned int counter)
{
	stack_t *k;
	(void)counter;

	k = *head;
	if (k == NULL)
		return;
	while (k)
	{
		printf("%d\n", k->n);
		k = k->next;
	}
}
