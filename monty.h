#ifndef MONTY_HEADER
#define MONTY_HEADER

#include "stdio.h"
#include "sys/types.h"
#include "unistd.h"
#include "string.h"
#include "ctype.h"
#include "fcntl.h"
#include "stdlib.h"

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct cmd_s - context info for each command execution
 * @arg: argument string passed to command
 * @input_file: pointer to monty file input stream
 * @curr_line: current line being processed from input file
 * @lifo_flag: flag to indicate whether LIFO or FIFO mode to apply
 * Description: struct that carries data used in processing
 */
typedef struct cmd_s
{
	char *arg;
	FILE *input_file;
	char *curr_line;
	int lifo_flag;
} cmd_t;
extern cmd_t cmdx;

void func_push(stack_t **head, unsigned int num);
void func_pall(stack_t **head, unsigned int num);
void func_pint(stack_t **head, unsigned int num);
void func_pop(stack_t **head, unsigned int counter);
void func_swap(stack_t **head, unsigned int counter);
void func_add(stack_t **head, unsigned int counter);
void func_nop(stack_t **head, unsigned int counter);
void free_dlist(stack_t *head);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

void add_to_node(stack_t **head, int n);
void add_to_queue(stack_t **head, int n);

int get_opcod(char *content, stack_t **head, unsigned int counter, FILE *file);

#endif
